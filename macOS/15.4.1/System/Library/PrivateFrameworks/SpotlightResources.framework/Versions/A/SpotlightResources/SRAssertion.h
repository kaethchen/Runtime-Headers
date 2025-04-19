@class NSString;

@interface SRAssertion : NSObject {
    BOOL _isSR;
    NSString *_assertionID;
}

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *deliveryType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)assertionID;
- (id)initWithAssertionID:(id)a0;
- (id)initWithAssetType:(id)a0 language:(id)a1 deliveryType:(id)a2;

@end
