@class NSString, NSURL, _NSCloudSharingPostShareViewController, NSItemProvider, NSObject, NSWindow, NSPopover, CKShare;
@protocol OS_dispatch_group;

@interface _NSCloudSharingService : NSSharingService <NSPopoverDelegate, NSWindowDelegate> {
    _NSCloudSharingPostShareViewController *_contentViewController;
    NSWindow *_parentWindow;
    NSPopover *_popover;
    NSWindow *_window;
    NSObject<OS_dispatch_group> *_participantListWaiterGroup;
    NSURL *_ubiquitousURL;
    NSURL *_addPeopleURL;
    NSItemProvider *_cloudKitProvider;
    unsigned long long _cloudkitOptions;
    CKShare *_resultingShare;
    BOOL _serviceIsBusy;
    BOOL _stoppedSharing;
    BOOL _isFolder;
    BOOL _isShared;
    BOOL _observersAreRegistered;
}

@property (retain) id item;
@property (retain) id selfReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_matchingItemsFromItems:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (long long)type;
- (BOOL)isEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_receivedError:(id)a0;
- (void)_dismissParticipantList;
- (void)_participantListReceivedAddPeople;
- (void)_participantListReceivedCancel;
- (void)_participantListReceivedShowSharedFolder;
- (void)_participantListReceivedStopSharing;
- (void)_participantListServiceDidFinishWithError:(id)a0;
- (void)_showAddPeopleServiceForItem:(id)a0 relativeToWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)_showInvitationService;
- (void)_showParticipantListService;
- (void)_showParticipantListServiceInPopoverWithItems:(id)a0 anchoringView:(id)a1 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 preferredEdge:(unsigned long long)a3;
- (void)_showParticipantListServiceInSheetAttachedToWindow:(id)a0 withItems:(id)a1;
- (BOOL)_showShareSheetPopoverInsteadOfInvitationService;
- (void)_startObservingViewBridgeChangesForViewController:(id)a0;
- (void)_stopObservingViewBridgeChangesForViewController:(id)a0;
- (id)_touchBarImage;
- (BOOL)canPerformWithItems:(id)a0;
- (id)initAsShared:(BOOL)a0 isFolder:(BOOL)a1;
- (void)performWithItems:(id)a0;
- (void)popoverDidClose:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;

@end
