@class NSString, NSDictionary, NSArray, NSError, ASDPurchase, NSNumber;

@interface ASDPurchaseResponseItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (readonly, nonatomic) NSDictionary *responseMetrics;
@property (readonly, nonatomic) NSDictionary *transationIDs;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) ASDPurchase *purchase;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSNumber *itemID;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL cancelsPurchaseBatch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setError:(id)a0;
- (id)initWithResults:(id)a0;
- (void)_setBundleID:(id)a0;
- (void)_setItemID:(id)a0;
- (void)_setPurchase:(id)a0;
- (void)_setResponseMetrics:(id)a0;
- (void)_setSuccess:(BOOL)a0;
- (void)_setTransactionIDs:(id)a0;
- (id)transactionIdentifierForItemIdentifier:(long long)a0;

@end
