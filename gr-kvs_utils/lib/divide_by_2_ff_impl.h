/* -*- c++ -*- */
/*
 * Copyright 2025 gr-kvs_utils author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_IMPL_H
#define INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_IMPL_H

#include <gnuradio/kvs_utils/divide_by_2_ff.h>

namespace gr {
namespace kvs_utils {

class divide_by_2_ff_impl : public divide_by_2_ff
{
private:
    float d_prev_sample;
    float d_state;


public:
    divide_by_2_ff_impl();
    ~divide_by_2_ff_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace kvs_utils
} // namespace gr

#endif /* INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_IMPL_H */
