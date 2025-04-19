@interface IFConcreteImage : IFImage {
    BOOL _placeholder;
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
    struct CGSize { double width; double height; } _iconSize;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_init;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGImage { } *)CGImage;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)placeholder;
- (void)setPlaceholder:(BOOL)a0;
- (unsigned long long)validationFlags;
- (struct CGImage { } *)_CGImage;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setValidationFlags:(unsigned long long)a0;

@end
