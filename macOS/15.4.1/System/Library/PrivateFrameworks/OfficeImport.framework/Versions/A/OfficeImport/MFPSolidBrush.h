@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (id)initWithColor:(id)a0;
- (void)fillPath:(id)a0;

@end
