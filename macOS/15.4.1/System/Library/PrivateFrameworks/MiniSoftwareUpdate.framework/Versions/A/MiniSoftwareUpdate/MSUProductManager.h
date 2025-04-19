@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MSUProductManager : NSObject

@property (class, readonly) MSUProductManager *defaultManager;

@property (retain) NSObject<OS_dispatch_queue> *productQueue;
@property (retain) NSMutableArray *catalogs;
@property (readonly) NSArray *allProducts;
@property (readonly) NSArray *installableProducts;

+ (BOOL)_downloadPKMForPackage:(id)a0 product:(id)a1 catalog:(id)a2 error:(id *)a3;
+ (void)_sendAsynchronousRequest:(id)a0 catalogURL:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)_sendSynchronousRequest:(id)a0 catalogURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (BOOL)__evaluateProduct:(id)a0 evaluationOptions:(id)a1 catalog:(id)a2 installable:(BOOL *)a3 error:(id *)a4;
- (BOOL)_evaluateProduct:(id)a0 evaluationOptions:(id)a1 catalog:(id)a2 installable:(BOOL *)a3 error:(id *)a4;
- (void)evaluateProductsWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)installableProductsMatchingPredicate:(id)a0;
- (void)productQueueReentrantSync:(id /* block */)a0;
- (void)registerCatalogAtURL:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
