@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (void)start;
- (id)height;
- (void)setHeight:(id)a0;
- (void)setWidth:(id)a0;
- (id)width;
- (void)stop;
- (id)behavior;
- (id)direction;
- (void)setBehavior:(id)a0;
- (void)setDirection:(id)a0;
- (void)setScrollDelay:(unsigned int)a0;
- (id)bgColor;
- (unsigned int)hspace;
- (int)loop;
- (unsigned int)scrollAmount;
- (unsigned int)scrollDelay;
- (void)setBgColor:(id)a0;
- (void)setHspace:(unsigned int)a0;
- (void)setLoop:(int)a0;
- (void)setScrollAmount:(unsigned int)a0;
- (void)setTrueSpeed:(BOOL)a0;
- (void)setVspace:(unsigned int)a0;
- (BOOL)trueSpeed;
- (unsigned int)vspace;

@end
