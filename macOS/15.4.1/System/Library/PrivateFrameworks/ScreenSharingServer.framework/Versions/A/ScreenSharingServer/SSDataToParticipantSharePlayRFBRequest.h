@class NSData;

@interface SSDataToParticipantSharePlayRFBRequest : SSLocalCommandRequest

@property (readonly, nonatomic) NSData *outgoingData;

+ (unsigned long long)xpcIdentifier;

- (void).cxx_destruct;
- (id)initWithXPCRepresentation:(id)a0;
- (id)xpcRepresentation;
- (id)initWithOutgoingData:(id)a0;

@end
