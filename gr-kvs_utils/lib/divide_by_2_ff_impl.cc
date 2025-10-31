/* -*- c++ -*- */
/*
 * Copyright 2025 gr-kvs_utils author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "divide_by_2_ff_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace kvs_utils {


using input_type = float;
using output_type = float;

divide_by_2_ff::sptr divide_by_2_ff::make()
{
    return gnuradio::make_block_sptr<divide_by_2_ff_impl>();
}


/*
 * The private constructor
 */
divide_by_2_ff_impl::divide_by_2_ff_impl()
    : gr::sync_block("divide_by_2_ff",
                     gr::io_signature::make(
                         1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
                     gr::io_signature::make(
                         1 /* min outputs */, 1 /*max outputs */, sizeof(output_type)))
{
    d_state = 0.5;
}

/*
 * Our virtual destructor.
 */
divide_by_2_ff_impl::~divide_by_2_ff_impl() {}

int divide_by_2_ff_impl::work(int noutput_items,
                              gr_vector_const_void_star& input_items,
                              gr_vector_void_star& output_items)
{
    auto in = static_cast<const input_type*>(input_items[0]);
    auto out = static_cast<output_type*>(output_items[0]);

    for (int i = 0; i < noutput_items; i++) {


        // wykryj przejście przez zero z - do +
        if (d_prev_sample < 0.0f && in[i] >= 0.0f) {
            d_state = -d_state; // zmiana stanu
        }

        // // out[i] = d_state;
        // if (in[i] >= 0.001)
        //     out[i] = 0.5;
        // else if (in[i] < -0.001)
        //     out[i] = -0.5;
        // else
        //     out[i] = 0;

        out[i] = d_state;

        d_prev_sample = in[i];
    }

    // Tell runtime system how many output items we produced.
    return noutput_items;
}

} /* namespace kvs_utils */
} /* namespace gr */
