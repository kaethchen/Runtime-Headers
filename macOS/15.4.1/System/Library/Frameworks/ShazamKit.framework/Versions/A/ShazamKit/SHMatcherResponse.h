@class SHSignature, SHMatch, NSUUID, NSError;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double recordingSignatureOffset;
@property (readonly) double recordingIntermission;
@property (readonly) double retrySeconds;
@property (readonly) SHMatch *match;
@property (readonly) NSError *error;
@property (readonly) long long result;
@property (readonly) SHSignature *signature;
@property (readonly) BOOL isStillRunningAssociatedRequest;
@property (readonly) NSUUID *runningAssociatedRequestID;

+ (id)errorResponseForSignature:(id)a0 error:(id)a1;
+ (id)matchWithRecordingIntermission:(double)a0 recordingSignatureOffset:(double)a1 retrySeconds:(double)a2 match:(id)a3;
+ (id)noMatchWithRecordingIntermission:(double)a0 recordingSignatureOffset:(double)a1 retrySeconds:(double)a2 signature:(id)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)validate;
- (id)initWithRecordingIntermission:(double)a0 recordingSignatureOffset:(double)a1 retrySeconds:(double)a2 match:(id)a3 signature:(id)a4 associatedRequestID:(id)a5 result:(long long)a6 error:(id)a7;
- (id)initWithRecordingIntermission:(double)a0 recordingSignatureOffset:(double)a1 retrySeconds:(double)a2 match:(id)a3 signature:(id)a4 runningAssociatedRequestID:(id)a5 error:(id)a6;

@end
