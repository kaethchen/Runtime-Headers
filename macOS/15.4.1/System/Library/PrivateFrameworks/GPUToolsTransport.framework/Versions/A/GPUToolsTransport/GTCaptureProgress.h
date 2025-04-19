@class GTCaptureDescriptor, GTCaptureProgressStatistics, GTCaptureCompletionState;

@interface GTCaptureProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long captureState;
@property (retain, nonatomic) GTCaptureDescriptor *descriptor;
@property (retain, nonatomic) GTCaptureCompletionState *completionState;
@property (retain, nonatomic) GTCaptureProgressStatistics *stats;
@property (nonatomic) unsigned long long capturedCommandsBuffers;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
