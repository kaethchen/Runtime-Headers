@class NSString, PKMutableProduct;

@interface OSProduct : NSObject

@property (retain) NSString *productUUID;
@property (retain) NSString *productPath;
@property (retain) NSString *resolvedProductPath;
@property (retain) NSString *productType;
@property (retain) PKMutableProduct *mutableProduct;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)_initForWritingAtPath:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)_diskForDiskWithUUID:(id)a0;
- (void)_sanityCheckProduct;

@end
