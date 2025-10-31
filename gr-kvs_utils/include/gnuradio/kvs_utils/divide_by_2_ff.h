/* -*- c++ -*- */
/*
 * Copyright 2025 gr-kvs_utils author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_H
#define INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_H

#include <gnuradio/kvs_utils/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace kvs_utils {

/*!
 * \brief <+description of block+>
 * \ingroup kvs_utils
 *
 */
class KVS_UTILS_API divide_by_2_ff : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<divide_by_2_ff> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of kvs_utils::divide_by_2_ff.
     *
     * To avoid accidental use of raw pointers, kvs_utils::divide_by_2_ff's
     * constructor is in a private implementation
     * class. kvs_utils::divide_by_2_ff::make is the public interface for
     * creating new instances.
     */
    static sptr make();
};

} // namespace kvs_utils
} // namespace gr

#endif /* INCLUDED_KVS_UTILS_DIVIDE_BY_2_FF_H */
