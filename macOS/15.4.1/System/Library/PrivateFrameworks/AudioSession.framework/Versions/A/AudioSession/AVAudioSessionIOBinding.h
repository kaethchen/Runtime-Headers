@class NSArray, AVAudioSession;

@interface AVAudioSessionIOBinding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AVAudioSession *session;
@property (readonly, nonatomic) NSArray *streams;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSession:(id)a0;
- (id)initWithSession:(id)a0 streams:(id)a1 error:(id *)a2;

@end
