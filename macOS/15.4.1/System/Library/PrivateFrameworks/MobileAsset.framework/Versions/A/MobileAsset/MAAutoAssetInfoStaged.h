@class NSDictionary;

@interface MAAutoAssetInfoStaged : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long totalStagedBytes;
@property (readonly, nonatomic) unsigned long long assetsSuccessfullyStaged;
@property (readonly, retain, nonatomic) NSDictionary *byGroupTotalStagedBytes;
@property (readonly, retain, nonatomic) NSDictionary *byGroupAssetsSuccessfullyStaged;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)fullDescription:(id)a0 usingLogger:(id)a1;
- (id)initWithByGroupTotalStagedBytes:(id)a0 withByGroupAssetsSuccessfullyStaged:(id)a1;
- (id)initWithTotalStagedBytes:(long long)a0 withAssetsSuccessfullyStaged:(unsigned long long)a1;
- (id)initWithTotalStagedBytes:(long long)a0 withAssetsSuccessfullyStaged:(unsigned long long)a1 withByGroupTotalStagedBytes:(id)a2 withByGroupAssetsSuccessfullyStaged:(id)a3;

@end
