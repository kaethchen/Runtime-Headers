@class WTAnalyticsDelegate, NSUUID, WTWritingToolsRemoteViewController, NSString, NSObject, NSPopover, WTWritingToolsConfiguration, NSPasteboard;
@protocol WTWritingToolsDelegate;

@interface WTWritingToolsViewController : NSViewController <NSPopoverDelegate>

@property (class, readonly, getter=isAvailable) BOOL available;

@property (retain, nonatomic) WTWritingToolsConfiguration *writingToolsConfiguration;
@property (retain, nonatomic) WTWritingToolsRemoteViewController *remoteViewController;
@property (weak, nonatomic) NSPopover *popover;
@property (nonatomic) BOOL popoverDidShow;
@property (retain, nonatomic) NSPasteboard *pasteboard;
@property (retain, nonatomic) id appFocusLostObserver;
@property (retain, nonatomic) id undoObserver;
@property (retain, nonatomic) id redoObserver;
@property (nonatomic) unsigned long long remainingUndoCount;
@property (nonatomic) unsigned long long remainingRedoCount;
@property (retain, nonatomic) WTAnalyticsDelegate *analyticsDelegate;
@property (readonly, nonatomic) NSUUID *analyticsUUID;
@property (weak) NSObject<WTWritingToolsDelegate> *writingToolsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithConfiguration:(id)a0;
- (void)endWritingTools;
- (void)popoverDidShow:(id)a0;
- (id)currentSession;
- (void)deactivate;
- (void)loadView;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;
- (void)popoverDidClose:(id)a0;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (id)selectedText;
- (id)suggestions;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)updatePositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)activateRemoteView;
- (void)deactivateRemoteView;
- (id)initWithRequestedTool:(long long)a0;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1;
- (id)initWithRequestedTool:(long long)a0 smartReplyConfiguration:(id)a1 selectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 positioningView:(id)a3;
- (struct CGSize { double x0; double x1; })initialPanelSizeForPanelType:(long long)a0;
- (BOOL)isShowingInPopoverRelativeToSelectionOfView:(id)a0;
- (id)selectedTextThroughServicesMenuRequestor;
- (void)showInPopover:(id)a0 withConfiguration:(id)a1;
- (void)showWritingTool:(long long)a0;

@end
