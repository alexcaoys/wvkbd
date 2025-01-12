#ifndef config_def_h_INCLUDED
#define config_def_h_INCLUDED

#define DEFAULT_FONT "Sans 14"
static const int transparency = 255;

struct clr_scheme schemes[] = {
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {45, 45, 45, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
},
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {32, 32, 32, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
}
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Compact, // First layout is the default layout on startup
  Function, 
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Compact, // First layout is the default layout on startup
  Function,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_def_h_INCLUDED
