@class NSData;

@interface GTReplayProfileRequest : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int priority;
@property (copy, nonatomic) id /* block */ streamHandler;
@property (nonatomic) int profileDataVersion;
@property (retain, nonatomic) NSData *profileData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
