@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (void).cxx_destruct;
- (id)validationToken;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGImage { } *)CGImage;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)placeholder;
- (void)setPlaceholder:(BOOL)a0;
- (unsigned long long)validationFlags;
- (struct CGSize { double x0; double x1; })iconSize;
- (void)setValidationFlags:(unsigned long long)a0;

@end
