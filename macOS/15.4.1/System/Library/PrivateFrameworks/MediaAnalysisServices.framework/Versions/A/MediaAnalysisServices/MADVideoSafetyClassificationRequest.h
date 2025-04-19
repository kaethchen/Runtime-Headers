@class NSNumber, MADVideoSafetyFrameSampling;

@interface MADVideoSafetyClassificationRequest : MADVideoRequest

@property (nonatomic) BOOL requiresScoresAndLabels;
@property (copy, nonatomic) MADVideoSafetyFrameSampling *sampling;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (nonatomic) BOOL requiresBlastdoor;
@property (retain, nonatomic) NSNumber *sensitiveFrameCountThreshold;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
