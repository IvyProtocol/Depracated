const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#111018", /* black   */
  [1] = "#445A90", /* red     */
  [2] = "#5D6984", /* green   */
  [3] = "#6E748E", /* yellow  */
  [4] = "#897F98", /* blue    */
  [5] = "#9C93AB", /* magenta */
  [6] = "#CBB5BB", /* cyan    */
  [7] = "#c3c3c5", /* white   */

  /* 8 bright colors */
  [8]  = "#5f5b6f",  /* black   */
  [9]  = "#445A90",  /* red     */
  [10] = "#5D6984", /* green   */
  [11] = "#6E748E", /* yellow  */
  [12] = "#897F98", /* blue    */
  [13] = "#9C93AB", /* magenta */
  [14] = "#CBB5BB", /* cyan    */
  [15] = "#c3c3c5", /* white   */

  /* special colors */
  [256] = "#111018", /* background */
  [257] = "#c3c3c5", /* foreground */
  [258] = "#c3c3c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
