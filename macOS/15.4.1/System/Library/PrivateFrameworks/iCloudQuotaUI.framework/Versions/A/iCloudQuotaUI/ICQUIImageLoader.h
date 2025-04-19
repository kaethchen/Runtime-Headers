@interface ICQUIImageLoader : NSObject

+ (BOOL)_hasURLForScale:(double)a0 inImageURL:(id)a1;
+ (id)_scaledImageURL:(id)a0;
+ (id)fetchIconForAssetID:(id)a0;
+ (id)fetchIconForBundleID:(id)a0;
+ (void)fetchIconFromIconSpecification:(id)a0 completion:(id /* block */)a1;
+ (void)fetchIconFromImageURL:(id)a0 completion:(id /* block */)a1;
+ (void)loadImageWithURL:(id)a0 completion:(id /* block */)a1;

@end
