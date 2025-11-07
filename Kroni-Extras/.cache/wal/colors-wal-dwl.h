/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x111018ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c3c5ff, 0x111018ff, 0x5f5b6fff },
	[SchemeSel]  = { 0xc3c3c5ff, 0x5D6984ff, 0x445A90ff },
	[SchemeUrg]  = { 0xc3c3c5ff, 0x445A90ff, 0x5D6984ff },
};
