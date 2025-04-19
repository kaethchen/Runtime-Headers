@class NSNumber;

@interface ATXNotificationRankingFeature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSNumber *weight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)score;
- (id)initWithWeight:(id)a0 value:(id)a1;

@end
