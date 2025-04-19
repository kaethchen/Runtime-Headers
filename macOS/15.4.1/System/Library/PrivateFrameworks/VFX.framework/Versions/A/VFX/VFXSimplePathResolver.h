@class NSString, NSURL;

@interface VFXSimplePathResolver : NSObject <VFXAssetPathResolver> {
    NSURL *_url;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolverWithFolderURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)absoluteURLForAssetPath:(id)a0;

@end
