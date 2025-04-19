@interface PXGEmptyTexture : PXGBaseTexture

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (struct CGImage { } *)imageRepresentation;
- (unsigned char)presentationType;
- (long long)estimatedByteSize;

@end
