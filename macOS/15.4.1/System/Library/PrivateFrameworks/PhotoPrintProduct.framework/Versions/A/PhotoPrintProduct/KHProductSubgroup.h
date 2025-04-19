@class KHProduct, NSString, NSMutableArray;

@interface KHProductSubgroup : NSObject

@property (readonly, nonatomic) KHProduct *masterProduct;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSMutableArray *products;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displaySize;
@property (readonly, nonatomic) NSString *displayDescription;
@property (readonly, nonatomic) NSString *displayPrice;
@property (readonly, nonatomic) long long displayIndex;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithProduct:(id)a0;
- (void)addProduct:(id)a0;

@end
