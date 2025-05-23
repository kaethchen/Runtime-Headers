@class NSString;

@interface IRMiloLslSingleScoreDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *eventID;

+ (id)miloLslSingleScoreDOWithScore:(double)a0 eventID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementEventID:(id)a0;
- (id)copyWithReplacementScore:(double)a0;
- (id)initWithScore:(double)a0 eventID:(id)a1;
- (BOOL)isEqualToMiloLslSingleScoreDO:(id)a0;

@end
