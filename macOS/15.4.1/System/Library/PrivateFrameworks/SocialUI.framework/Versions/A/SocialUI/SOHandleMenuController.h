@class NSString, SOChatDisplayController, IDSBatchIDQueryController, NSMenu, NSMutableDictionary;

@interface SOHandleMenuController : NSObject <IDSBatchIDQueryControllerDelegate, NSMenuDelegate> {
    IDSBatchIDQueryController *_batchIDQueryController;
    NSMutableDictionary *_iMessageIDSIDToMenuItemDictionary;
    NSMutableDictionary *_smsIDSIDToMenuItemDictionary;
    NSMutableDictionary *_knownIDSIDStatus;
}

@property BOOL showingMenu;
@property (copy) id /* block */ handleBlock;
@property (weak) SOChatDisplayController *chatDisplayController;
@property BOOL hideAlternateHandles;
@property (retain) NSMenu *menu;
@property BOOL includeHandleAlternatives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_handleMenuItemLabelParagraphStyle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeParticipant:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)updateMenu;
- (void)ignore:(id)a0;
- (void)performRelayPhoneCall:(id)a0;
- (void)switchToHandle:(id)a0;
- (id)_actionItemsForHandle:(id)a0 errorCode:(unsigned long long)a1;
- (id)_alternativeHandlesIncludingABCombinations:(BOOL)a0;
- (void)_cleanupMenuManagement;
- (void)_loginToIMessage:(id)a0;
- (void)askToShareRecipientScreen:(id)a0;
- (void)composeEmail:(id)a0;
- (void)inviteToShareMyScreen:(id)a0;
- (void)performFaceTimeAudioCall:(id)a0;
- (void)performFaceTimeVideoCall:(id)a0;

@end
