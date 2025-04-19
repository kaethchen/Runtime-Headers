@interface ISPlatformInfo : IFPlatformInfo

+ (id)sharedInstance;

- (BOOL)supportsRequestingLayerStacksForPlatform:(unsigned long long)a0;
- (BOOL)supportsRequestingMultisizedImagesForPlatform:(unsigned long long)a0;

@end
