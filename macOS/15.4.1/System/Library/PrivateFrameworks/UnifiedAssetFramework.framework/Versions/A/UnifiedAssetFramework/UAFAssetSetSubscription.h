@class NSString, NSDictionary, NSDate;

@interface UAFAssetSetSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *assetSets;
@property (readonly, copy) NSDictionary *usageAliases;
@property (readonly, copy) NSDate *expiration;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesAsDictionary;
- (BOOL)isValid:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 assetSets:(id)a1 usageAliases:(id)a2 expires:(id)a3;
- (id)initWithName:(id)a0 assetSets:(id)a1 usageAliases:(id)a2;
- (id)expirationAsString;
- (id)init:(id)a0 assetSets:(id)a1 usageAliases:(id)a2;
- (id)init:(id)a0 assetSets:(id)a1 usageAliases:(id)a2 expires:(id)a3;

@end
