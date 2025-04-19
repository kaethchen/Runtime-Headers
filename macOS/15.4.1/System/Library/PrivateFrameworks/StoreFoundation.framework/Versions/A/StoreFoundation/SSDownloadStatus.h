@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isFailed) BOOL failed;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property BOOL waiting;
@property (readonly, nonatomic) SSDownloadPhase *activePhase;
@property (readonly, nonatomic) float percentComplete;
@property (readonly, nonatomic) float phasePercentComplete;
@property (readonly, nonatomic) long long phaseTimeRemaining;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setOperationProgress:(id)a0;

@end
