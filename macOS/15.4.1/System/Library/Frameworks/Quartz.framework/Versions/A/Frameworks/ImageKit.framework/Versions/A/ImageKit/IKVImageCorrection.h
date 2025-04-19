@interface IKVImageCorrection : IKImageCorrection

+ (id)filterWithName:(id)a0 identifier:(id)a1;

- (id)description;
- (BOOL)isIdentity;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;
- (void)setCorrectionEnabled:(BOOL)a0;

@end
