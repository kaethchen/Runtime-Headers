@class NSDictionary;

@interface ATXNotificationRankingFeatureSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)score;
- (id)initWithFeatures:(id)a0 metadata:(id)a1;

@end
