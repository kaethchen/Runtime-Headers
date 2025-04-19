@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *rewardsItems;

+ (id)_rewardsItemsSetFromJsonString:(id)a0;
+ (id)_cloudRecordKeyForRewardsProperty:(unsigned long long)a0;
+ (id)recordNamePrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (id)jsonString;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0 property:(unsigned long long)a1;
- (id)_rewardItemsFromRecord:(id)a0 property:(unsigned long long)a1;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0 property:(unsigned long long)a1;
- (BOOL)containsItemOfType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1 property:(unsigned long long)a2;
- (id)enhancedMerchantRewardsItems;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0 property:(unsigned long long)a1;
- (id)initWithJsonString:(id)a0;
- (id)initWithRewardsItems:(id)a0;
- (BOOL)isEqualToRewards:(id)a0;
- (id)jsonArrayRepresentation;
- (id)promotionalRewardsItems;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (id)totalAmountForUnit:(unsigned long long)a0;
- (id)totalEligibleValueForUnit:(unsigned long long)a0;

@end
