@interface ExtensionIconTintedImageRep : TintedImageRep {
    double _luminance;
}

- (BOOL)draw;
- (id)initWithImage:(id)a0 tintColor:(id)a1 luminance:(double)a2;

@end
