@class NSString, NSNumber;

@interface IDSBlastDoorMessageContext : NSObject

@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL isInvitationService;
@property (readonly, nonatomic) NSNumber *command;
@property (nonatomic) unsigned int payloadType;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)a0 command:(id)a1;

@end
