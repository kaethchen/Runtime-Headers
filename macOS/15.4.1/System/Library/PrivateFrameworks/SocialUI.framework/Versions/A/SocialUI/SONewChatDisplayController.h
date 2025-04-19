@class NSUndoManager, NSMutableDictionary, NSDate;

@interface SONewChatDisplayController : SOChatDisplayController {
    NSMutableDictionary *_knownIDStatus;
}

@property (copy, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) NSUndoManager *recipientBarUndoManager;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)removeParticipant:(id)a0;
- (BOOL)canBeRestored;
- (void)chatWillChange:(id)a0;
- (void)_chatRegistryWillUnregisterChat:(id)a0;
- (BOOL)_containsLegacyServiceHandles;
- (id)_currentIDSIDs;
- (void)_recalculateRecipientsFromIDSResults:(id)a0 allAddressesIMessageCapable:(BOOL)a1 checkedServer:(BOOL)a2 errorCode:(long long)a3;
- (void)_replaceIDSRecipientsWithService:(id)a0;
- (BOOL)canAddRecipientHandles;
- (BOOL)canInsertAttachmentsIntoInputLineContents;
- (BOOL)canInsertFilesAtURLs:(id)a0 intoInputLineContentsReturningError:(id *)a1;
- (BOOL)canRemoveRecipientHandles;
- (void)chatDidChange;
- (void)chatDisplayNameDidChange;
- (id)chatTranscriptItemAtIndex:(unsigned long long)a0;
- (id)chatTranscriptItems;
- (long long)compareForConversationListSorting:(id)a0;
- (BOOL)filterEmptyChatOut;
- (long long)knownIDSIDStatusForIMHandle:(id)a0;
- (unsigned long long)numberOfChatTranscriptItems;
- (void)recipientHandlesDidChange;
- (void)recipientsDidChange;
- (void)removeIMHandleGUIDFromDanglingHandles:(id)a0;
- (BOOL)representsNewChat;
- (unsigned long long)validateIMHandle:(id)a0;

@end
