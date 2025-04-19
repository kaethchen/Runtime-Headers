@interface GTReplayProfileTimeline : GTReplayProfileRequest

@property (nonatomic) BOOL shaderProfiling;
@property (nonatomic) BOOL saveProfilerRaw;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
