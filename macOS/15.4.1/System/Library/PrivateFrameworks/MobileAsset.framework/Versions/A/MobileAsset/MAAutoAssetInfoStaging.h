@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *updateAttributes;
@property (readonly, retain, nonatomic) NSDictionary *byGroupAvailableForStagingAttributes;
@property (readonly, retain, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, retain, nonatomic) NSDictionary *byGroupTotalExpectedBytes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)fullDescription:(id)a0 usingLogger:(id)a1;
- (id)initWithAvailableForStaging:(id)a0 withTotalExpectedBytes:(unsigned long long)a1;
- (id)initWithByGroupAvailableForStaging:(id)a0 withByGroupTotalExpectedBytes:(id)a1;
- (id)initWithUpdateAttributes:(id)a0;
- (id)initWithUpdateAttributes:(id)a0 withByGroupAvailableForStaging:(id)a1 withAvailableForStaging:(id)a2 withByGroupTotalExpectedBytes:(id)a3 withTotalExpectedBytes:(unsigned long long)a4;
- (id)initWithUpdateAttributes:(id)a0 withByGroupAvailableForStaging:(id)a1 withByGroupTotalExpectedBytes:(id)a2;

@end
