@class NSString, NSArray, IMDAccount, IMDServiceSession, IMDChat;

@interface IMCrossServiceAssociationMessagePipelineParameter : NSObject <IMPipelineParameter, IMFindAccountProcessingParameter, IMCrossServiceAssociationMessageProcessingPipelineParameter, IMFindChatProcessingParameter, IMMessageFromStorageParameter>

@property (readonly, nonatomic) NSString *replicationSourceServiceName;
@property (readonly, nonatomic) NSString *toIdentifier;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) NSString *fromDisplayID;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *currentGroupName;
@property (readonly, nonatomic) NSArray *participantIdentifiers;
@property (retain, nonatomic) IMDChat *chat;
@property (readonly, nonatomic) NSString *replacementGUID;
@property (readonly, nonatomic) unsigned long long crossServiceDeduplicationMechanism;
@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSArray *messageItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
