#include <stdint.h>
#include <libretro.h>

typedef struct
{
  uint32_t sha1[ 5 ];
  struct retro_variable vars[ 15 ];
}
overrides_t;

static overrides_t s_overrides[] =
{
  {
    /* Virus, 2010, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x0f7a62faU, 0x0d575d59U, 0x5857aafdU, 0xefc78b33U, 0xa207be91U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "c" },
      { "81_joypad_l2", "q" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "r" },
      { "81_joypad_r2", "p" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* Impact!, 2012, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x11c5fe8dU, 0x44763d94U, 0xa3eedf59U, 0x7b6daf04U, 0x38364e22U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "h" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* U-Bend, 2015, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x17c49e4aU, 0xc9179ed0U, 0xd08c18c6U, 0x71f3db53U, 0x43bad3ccU },
    {
      { "81_chroma_81", "enabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "l" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "m" },
      { "81_joypad_l", "c" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "z" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "x" },
      { "81_joypad_up", "k" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "p" },
      { "81_sound", "none" },
    },
  },
  {
    /* Ant Attack, 2013, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x1b4fc9ebU, 0x5cd3373aU, 0x9986fcd3U, 0x95d0117cU, 0x6b3c4718U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "c" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "default" },
      { "81_joypad_l", "f" },
      { "81_joypad_l2", "g" },
      { "81_joypad_left", "z" },
      { "81_joypad_r", "s" },
      { "81_joypad_r2", "d" },
      { "81_joypad_right", "x" },
      { "81_joypad_up", "v" },
      { "81_joypad_x", "g" },
      { "81_joypad_y", "b" },
      { "81_sound", "none" },
    },
  },
  {
    /* Pandemic, 2014, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x28afa426U, 0xe660186aU, 0x1c1c56d7U, 0x4251b604U, 0xe25bb2a1U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "l" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "m" },
      { "81_joypad_l", "c" },
      { "81_joypad_l2", "m" },
      { "81_joypad_left", "z" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "p" },
      { "81_joypad_right", "x" },
      { "81_joypad_up", "k" },
      { "81_joypad_x", "r" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* Boulder Logic, 2011, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x3c74569eU, 0xf70327ecU, 0xf17db982U, 0xef92b455U, 0x7c17b538U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "p" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "l" },
      { "81_joypad_l2", "q" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "r" },
      { "81_joypad_r2", "p" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "c" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* Miner Man, 2011, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x54db0c53U, 0x05f89a62U, 0x9a19e5e1U, 0x07f34e65U, 0xd2bfbd93U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "default" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "l" },
      { "81_joypad_l2", "q" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "r" },
      { "81_joypad_r2", "p" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "c" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* Noir Shapes, 2012, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x5642ddd9U, 0x4d1c6649U, 0xbc2e01caU, 0x112b7d76U, 0xf376c826U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "l" },
      { "81_joypad_l2", "q" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "r" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "c" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* ZXagon, 2014, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x59dae098U, 0x079f00c3U, 0xe72ec464U, 0x7ccbd2edU, 0x99b979f1U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "default" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "default" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "z" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "x" },
      { "81_joypad_up", "default" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* Rebound, 2014, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x6abc2d4dU, 0xe5bb40aaU, 0xc8f3703eU, 0x5c33a9ceU, 0x3a31be75U },
    {
      { "81_chroma_81", "enabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "l" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "default" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "z" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "p" },
      { "81_joypad_right", "x" },
      { "81_joypad_up", "default" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "s" },
      { "81_sound", "none" },
    },
  },
  {
    /* One Little Ghost, 2012, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x7bd65421U, 0x239915daU, 0xd4137206U, 0xc0c7572fU, 0x31c6ac5aU },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "default" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "5" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "7" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "6" },
      { "81_joypad_up", "8" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "p" },
      { "81_sound", "none" },
    },
  },
  {
    /* Domin8tr1s, 2010, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x8e8ee9c4U, 0xfc589f38U, 0x6596ef3bU, 0x3e8fab9bU, 0x9ee799efU },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "6" },
      { "81_joypad_down", "default" },
      { "81_joypad_l", "s" },
      { "81_joypad_l2", "w" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "i" },
      { "81_joypad_r2", "h" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "default" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "n" },
      { "81_sound", "none" },
    },
  },
  {
    /* CroZXy Road, 2015, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0x98ef4e7aU, 0x24f87c9dU, 0x253da0dcU, 0x68698850U, 0xdcd2752fU },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "default" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "m" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "p" },
      { "81_sound", "none" },
    },
  },
  {
    /* Quack!, 2014, Bob Smith, http://www.bobs-stuff.co.uk/zx81.html*/
    { 0xd7e40348U, 0xcc9181d2U, 0x033c63e1U, 0x7e8fe075U, 0x89e90c64U },
    {
      { "81_chroma_81", "disabled" },
      { "81_highres", "none" },
      { "81_joypad_a", "0" },
      { "81_joypad_b", "default" },
      { "81_joypad_down", "6" },
      { "81_joypad_l", "default" },
      { "81_joypad_l2", "default" },
      { "81_joypad_left", "5" },
      { "81_joypad_r", "default" },
      { "81_joypad_r2", "default" },
      { "81_joypad_right", "8" },
      { "81_joypad_up", "7" },
      { "81_joypad_x", "default" },
      { "81_joypad_y", "default" },
      { "81_sound", "none" },
    },
  },
};
