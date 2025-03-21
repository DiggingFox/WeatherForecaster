#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw_img.h"

const uint8_t 10_map[] = {
  0x04, 0x02, 0x04, 0xff, 	/*Color of index 0*/
  0xfc, 0xfe, 0xfc, 0xff, 	/*Color of index 1*/

  0xff, 0x1f, 0xf0, 
  0xfc, 0x07, 0xf0, 
  0xf8, 0x03, 0xf0, 
  0xf0, 0x03, 0xf0, 
  0xf0, 0x00, 0xf0, 
  0xe0, 0x00, 0x30, 
  0xe0, 0x00, 0x10, 
  0x80, 0x00, 0x00, 
  0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 
  0x80, 0x00, 0x30, 
  0xc0, 0x00, 0x70, 
  0xe0, 0x01, 0xf0, 
  0xff, 0xff, 0xf0, 
  0xf7, 0x6d, 0xf0, 
  0xee, 0xed, 0xf0, 
  0xee, 0xdb, 0xf0, 
  0xfd, 0xfb, 0xf0, 
};

lv_img_dsc_t 10 = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 68,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = 10_map,
};
