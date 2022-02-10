# Build LVGL demo
To build LVGL demo, run following commands.

    $ mkdir build
    $ cd build
    
    $ emcmake cmake .. -D CMAKE_C_FLAGS='-DCHOSEN_DEMO=lv_demo_widgets -DLV_CONF_INCLUDE_SIMPLE=1'
    $ emmake make -j4

    $ http-server

Then browse to http://localhost:8080/lvgl.html on host OS

To specify display size using parameters e.g. 480 x 320
http://localhost:8080/lvgl.html?w=480&h=320
