@class NSData, NSString;

@interface SSDataFromParticipantSharePlayRFBRequest : SSLocalCommandRequest

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *participantHandle;

+ (unsigned long long)xpcIdentifier;

- (void).cxx_destruct;
- (id)initWithXPCRepresentation:(id)a0;
- (id)xpcRepresentation;
- (id)initWithData:(id)a0 fromParticipantHandle:(id)a1;

@end
