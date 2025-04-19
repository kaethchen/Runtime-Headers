@class NSString, NSNumber;

@interface MADEmbeddingSearchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) long long metric;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetUUID:(id)a0 distance:(id)a1 metric:(long long)a2;

@end
