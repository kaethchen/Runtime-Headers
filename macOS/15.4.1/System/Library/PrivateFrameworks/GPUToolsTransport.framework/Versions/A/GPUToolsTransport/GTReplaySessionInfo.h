@class NSURL;

@interface GTReplaySessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *gputraceURL;
@property (nonatomic) unsigned long long shaderDebuggerVersion;
@property (nonatomic) unsigned long long shaderProfilerVersion;
@property (nonatomic) unsigned long long accelerationViewerVersion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
