@class NSString, NSError, PKPendingProvisioning;

@interface PKPendingProvisioningReceipt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *passUniqueID;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double createdAt;
@property (retain, nonatomic) PKPendingProvisioning *pendingProvisioning;

+ (id)failedReceiptWithPendingProvisioning:(id)a0 error:(id)a1;
+ (id)remoteSuccessReceiptWithPendingProvisioning:(id)a0;
+ (id)successReceiptWithPendingProvisioning:(id)a0 passUniqueID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForDatabase;
- (id)_initWithPendingProvisioning:(id)a0 type:(long long)a1 passUniqueID:(id)a2 error:(id)a3;

@end
