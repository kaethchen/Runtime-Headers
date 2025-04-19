@class NSString, NSArray;

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *formattedString;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) double speakingRate;
@property (readonly, nonatomic) double averagePauseDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSegments:(id)a0 formattedString:(id)a1 speakingRate:(double)a2 averagePauseDuration:(double)a3;

@end
