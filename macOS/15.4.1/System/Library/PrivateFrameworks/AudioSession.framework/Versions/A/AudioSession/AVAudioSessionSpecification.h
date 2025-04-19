@class NSString;

@interface AVAudioSessionSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (nonatomic) unsigned int sourceSessionID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic) unsigned int useCaseIdentifier;
@property (nonatomic) BOOL autoReconnect;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
