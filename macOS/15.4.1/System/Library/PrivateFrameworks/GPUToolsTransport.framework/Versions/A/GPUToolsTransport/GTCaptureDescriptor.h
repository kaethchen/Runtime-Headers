@class NSURL;

@interface GTCaptureDescriptor : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long triggerHitsToStart;
@property (nonatomic) unsigned long long triggerHitsToEnd;
@property (nonatomic) BOOL suspendAfterCapture;
@property (nonatomic) BOOL ignoreUnusedResources;
@property (nonatomic) BOOL includeBacktrace;
@property (nonatomic) unsigned long long streamRef;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL isToolsCapture;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestID:(unsigned long long)a0;

@end
