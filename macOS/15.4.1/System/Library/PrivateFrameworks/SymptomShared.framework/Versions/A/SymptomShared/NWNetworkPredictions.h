@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *changePointAt;
@property (readonly) long long toQuality;
@property (readonly) double confidence;
@property (readonly) long long resolutionSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpec:(id)a0 toQuality:(long long)a1 withConfidence:(double)a2 resolutionSeconds:(unsigned int)a3;

@end
