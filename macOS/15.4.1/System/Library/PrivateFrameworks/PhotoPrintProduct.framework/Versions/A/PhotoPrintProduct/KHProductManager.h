@class NSArray, NSMutableDictionary, NSURL, NSMutableSet, NSLock;

@interface KHProductManager : NSObject {
    NSMutableSet *_products;
    NSLock *_productsLock;
    NSMutableDictionary *_productsByProductCode;
    NSMutableDictionary *_productSetsByProjectType;
    NSMutableDictionary *_productSetsByProductType;
}

@property (retain, nonatomic) NSURL *productsURL;
@property (copy, nonatomic) NSArray *productCodeWhitelist;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)allProducts;
- (id)productForCode:(id)a0;
- (void)_loadProductsIfNecessary;
- (id)productCodesForProjectType:(long long)a0;
- (id)productsWithProductType:(long long)a0;
- (id)productsWithProjectType:(long long)a0;
- (void)resetProducts;

@end
