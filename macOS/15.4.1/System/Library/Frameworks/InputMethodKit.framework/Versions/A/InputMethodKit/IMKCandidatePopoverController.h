@class IMKCandidateController, NSString, NSView, NSURL, NSTimer, WebView, NSPopover;
@protocol IMKCandidateLookupSupport;

@interface IMKCandidatePopoverController : NSObject <WebFrameLoadDelegate> {
    NSPopover *_popover;
    WebView *_webView;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) IMKCandidateController *controller;
@property (retain, nonatomic) NSView<IMKCandidateLookupSupport> *descriptionTargetView;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (retain, nonatomic) NSURL *stylesheetURL;
@property (retain, nonatomic) NSTimer *popoverTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_hidePopover;
- (void)_showPopover;
- (void)hide;
- (id)initWithController:(id)a0;
- (void)_setupPopover;
- (void)_setupWebview;
- (void)_showPopoverWithAccessibilityPid;
- (id)candidateContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellRect;
- (BOOL)controllerIsVerticalLayout;
- (void)startPopoverShowTimerWithDuration:(double)a0;
- (void)stopPopoverShowTimer;
- (id)windowContentsView;

@end
