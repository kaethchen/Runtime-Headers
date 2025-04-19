@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSSecureCoding, NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) long long phaseType;
@property (readonly) long long progressValue;
@property (readonly) long long totalProgressValue;
@property (readonly) long long progressUnits;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) float progressChangeRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperationProgress:(id)a0;

@end
