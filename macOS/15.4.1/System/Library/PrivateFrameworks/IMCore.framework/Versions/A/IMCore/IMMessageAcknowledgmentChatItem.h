@class NSArray, IMMessage;

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSArray *fileTransferGUIDs;
@property (readonly, copy, nonatomic) IMMessage *message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1 tapback:(id)a2;
- (id)commSafetyTransferGUID;
- (BOOL)containsTransferGUID:(id)a0;
- (BOOL)isEqualToTapback:(id)a0;
- (BOOL)supportsCommunicationSafety;

@end
