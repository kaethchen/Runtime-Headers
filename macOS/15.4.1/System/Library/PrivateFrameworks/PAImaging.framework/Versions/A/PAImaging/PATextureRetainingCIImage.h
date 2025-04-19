@class PATexture;

@interface PATextureRetainingCIImage : CIImage

@property (retain) PATexture *referencedTexture;

- (void).cxx_destruct;

@end
