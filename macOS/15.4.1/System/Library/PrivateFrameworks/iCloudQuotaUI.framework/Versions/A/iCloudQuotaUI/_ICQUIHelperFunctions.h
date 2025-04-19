@interface _ICQUIHelperFunctions : NSObject

+ (id)scaledImageURL:(id)a0;
+ (void)addHeadersForRequest:(id)a0 completion:(id /* block */)a1;
+ (id)appIconWithSize:(struct CGSize { double x0; double x1; })a0 forBundleID:(id)a1;
+ (id)appIconWithSize:(struct CGSize { double x0; double x1; })a0 forBundleID:(id)a1 drawBorder:(BOOL)a2;
+ (double)highestScreenScale;
+ (long long)purchaseTypeForQueryParams:(id)a0;

@end
