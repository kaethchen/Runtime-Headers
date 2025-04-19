@class NSString, NSError, NSDictionary;

@interface BTAudioRoutingResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int action;
@property (nonatomic) unsigned int clientID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDictionary *wxInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
