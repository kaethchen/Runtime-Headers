@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy {
    double _fitWidth;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithWidth:(double)a0;
- (BOOL)isBestFitPolicy;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
