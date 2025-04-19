@class NSString;

@interface EMAccount : EMObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *hostname;
@property (readonly, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount;

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorForNameAscending:(BOOL)a0;
+ (id)predicateForDeliveryAccounts;
+ (id)predicateForReceivingAccounts;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)ef_publicDescription;

@end
