@class NSString;

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long assetCompatibilityVersion;
@property (readonly, nonatomic) long long assetVersion;
@property (readonly, nonatomic) NSString *abGroup;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetCompatibilityVersion:(long long)a0 assetVersion:(long long)a1 abGroup:(id)a2;

@end
