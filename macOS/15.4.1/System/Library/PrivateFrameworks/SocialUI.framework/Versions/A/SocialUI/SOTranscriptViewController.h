@class IMChat, NSString, NSScrollView, NSSet, NSOrderedSet, NSTouchBarItem, SOStickerViewerController, SOInputLineViewController, IMMessagePartChatItem, IMAggregateAcknowledgmentChatItem;

@interface SOTranscriptViewController : SOChatViewController <QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSPopoverDelegate, NSTouchBarDelegate, SOStickerViewerControllerDelegate> {
    unsigned long long _mousedownCount;
}

@property (class, readonly, copy) NSSet *registeredTranscriptClasses;
@property (class, copy) NSString *defaultTranscriptViewControllerName;

@property (copy, nonatomic) NSOrderedSet *selectedMessages;
@property (copy, nonatomic) NSOrderedSet *selectedChatItemGUIDs;
@property (readonly) NSScrollView *scrollView;
@property double topOverlap;
@property double bottomOverlap;
@property (readonly, nonatomic) IMChat *chat;
@property (weak) SOInputLineViewController *inputLineViewController;
@property (retain) IMMessagePartChatItem *actionableMessage;
@property (readonly) NSTouchBarItem *acknowledgementsTouchBarItem;
@property (readonly) IMMessagePartChatItem *acknowledgeableChatItem;
@property (copy, nonatomic) NSString *displayedAckPickerChatItemGUID;
@property (readonly, getter=isDisplayingAcknowledgmentPicker) BOOL displayingAcknowledgmentPicker;
@property (readonly) IMAggregateAcknowledgmentChatItem *groupAcknowledgmentsPoll;
@property (readonly, nonatomic) BOOL shouldPinToBottom;
@property (readonly, nonatomic) double distanceFromBottom;
@property (nonatomic) SOStickerViewerController *stickerViewerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)classIsRegistered:(Class)a0;
+ (void)registerTranscriptClass:(Class)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)makeTouchBar;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (id)scrollView;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)deselectAll;
- (void)beginChanges;
- (void)endChanges;
- (void)markAllMessagesAsRead;
- (void)chatItemsDidChange:(id)a0;
- (void)chatWillChange:(id)a0;
- (void)chatDisplayControllerDidChange:(id)a0;
- (void)_acknowledgeFromDFR:(id)a0;
- (BOOL)_anyUnsavedMessageSelected;
- (void)_chatDisplayControllerChatDidChange:(id)a0;
- (void)_chatDisplayControllerChatWillChange:(id)a0;
- (void)_clearUnreadMessagesIfVisible:(id)a0;
- (void)_commonSOTranscriptViewControllerInit;
- (void)_updateAcknowledgementTouchBarItem;
- (void)_updateTouchBar:(id)a0;
- (void)beginFullScreenEffectPlayback;
- (void)beginLongClick;
- (double)bottomOverlap;
- (BOOL)canShowAcknowledgmentPickerForChatItemGUID:(id)a0;
- (void)chatDidChange:(id)a0;
- (void)chatDisplayControllerWillChange:(id)a0;
- (void)clearUnreadMessagesIfVisible;
- (void)copySelectionIntoPasteboard:(id)a0;
- (void)deselectMessage:(id)a0;
- (void)didFinishProcessingChatItemsChange;
- (void)dismissAcknowledgmentsWithAnimation:(BOOL)a0;
- (void)endFullScreenEffectPlayback;
- (void)endLongClick;
- (void)highlightSearchString:(id)a0;
- (BOOL)isLongClicking;
- (BOOL)lastMessageIsVisible;
- (unsigned long long)maximumNumberOfMessagesVisibleForHeight:(double)a0;
- (void)processChatItemChanges:(id)a0;
- (void)scrollToEndSmoothly:(BOOL)a0;
- (void)selectMessage:(id)a0;
- (void)setBottomOverlap:(double)a0;
- (void)setTopOverlap:(double)a0;
- (void)showStickerViewer:(id)a0;
- (void)stickerViewerController:(id)a0 willDeleteStickers:(id)a1;
- (double)topOverlap;
- (void)updateAttachments;
- (void)updateQLPreviewPanel:(id)a0;

@end
