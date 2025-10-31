#!/usr/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils
export GR_CONF_CONTROLPORT_ON=False
export PATH="/home/karolf/projects/cessb/gr-kvs_utils/build/python/kvs_utils":"$PATH"
export LD_LIBRARY_PATH="":$LD_LIBRARY_PATH
export PYTHONPATH=/home/karolf/projects/cessb/gr-kvs_utils/build/test_modules:$PYTHONPATH
/usr/bin/python3 /home/karolf/projects/cessb/gr-kvs_utils/python/kvs_utils/qa_divide_by_2_ff.py 
