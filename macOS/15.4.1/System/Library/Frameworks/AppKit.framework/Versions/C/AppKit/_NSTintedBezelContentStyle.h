@class NSColor;

@interface _NSTintedBezelContentStyle : NSAppearanceContentStyle {
    NSColor *_bezelTintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (id)initWithBezelTintColor:(id)a0;

@end
