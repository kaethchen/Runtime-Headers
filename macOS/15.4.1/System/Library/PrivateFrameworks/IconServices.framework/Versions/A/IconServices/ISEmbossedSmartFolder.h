@class NSString;

@interface ISEmbossedSmartFolder : ISEmbossedFolder <ISCompositorRecipe>

@property unsigned long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)embossVariant;
- (id)folderResourceName;

@end
