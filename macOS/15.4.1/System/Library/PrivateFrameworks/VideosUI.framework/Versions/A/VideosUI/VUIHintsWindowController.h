@class NSView, NSTextField;
@protocol VUIHintsWindowControllerDelegate;

@interface VUIHintsWindowController : NSWindowController

@property (weak, nonatomic) NSTextField *parentTextField;
@property (weak, nonatomic) NSView *hintsView;
@property (nonatomic) id lostFocusObserver;
@property (nonatomic) id localMouseDownEventMonitor;
@property (weak, nonatomic) id<VUIHintsWindowControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)updateLayout;
- (void)updateLayoutWithContainerWidth:(double)a0;
- (void)_layoutHintsWindowWithContainerWidth:(double)a0 contentHeight:(double)a1;
- (void)dismissHintsWindow;
- (void)showHintWindowForTextField:(id)a0 hintsView:(id)a1;

@end
