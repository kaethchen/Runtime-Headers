@class NSString, NSArray, IMDAccount, IMDServiceSession, BlastDoorStickerAttachmentInfo, IMDChat;

@interface IMRepositionStickerCommandPipelineParameter : NSObject <IMRepositionStickerCommandProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;
@property (readonly, copy, nonatomic) BlastDoorStickerAttachmentInfo *stickerAttachmentInfo;
@property (readonly, copy, nonatomic) NSString *stickerEditedMessageGuid;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
