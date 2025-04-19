@class NSWindow, NSString, NSViewController, NSView, CAContext, PIPPanel;
@protocol PIPViewControllerDelegate;

@interface PIPViewController : NSViewController <NSViewControllerPresentationAnimator> {
    struct CGSize { double width; double height; } _aspectRatio;
    struct CGSize { double width; double height; } _maxSize;
    struct CGSize { double width; double height; } _minSize;
    BOOL _userCanResize;
    BOOL _playing;
    BOOL _muted;
    BOOL _animateDismissal;
    BOOL _pipping;
    unsigned int _activeFencePort;
    unsigned long long _controls;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _customControlsFrame;
    id _customControlsFrameObserver;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) PIPPanel *panel;
@property (retain, nonatomic) CAContext *context;
@property (retain, nonatomic) id accessibility;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) BOOL useAutoLayout;
@property (nonatomic) BOOL presentOnResize;
@property (weak, nonatomic) NSWindow *replacementWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } replacementRect;
@property (weak, nonatomic) NSViewController *customControlsViewController;
@property (nonatomic) BOOL customControlsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } customControlsFrame;
@property (nonatomic) BOOL observingCustomControlsFrame;
@property (weak, nonatomic) id<PIPViewControllerDelegate> delegate;
@property (nonatomic) BOOL userCanResize;
@property (nonatomic) struct CGSize { double x0; double x1; } minSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maxSize;
@property (nonatomic) struct CGSize { double x0; double x1; } aspectRatio;
@property (weak, nonatomic) NSView *replacementView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibName;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)loadView;
- (id)nibBundle;
- (void)performWindowDragWithEvent:(id)a0;
- (id)representedObject;
- (BOOL)playing;
- (BOOL)muted;
- (void)setMuted:(BOOL)a0;
- (unsigned long long)controls;
- (void)setControls:(unsigned long long)a0;
- (void)presentViewControllerAsPictureInPicture:(id)a0;
- (void)setPlaying:(BOOL)a0;
- (void)_dismissViewControllerWithFlyback;
- (unsigned int)copyActiveFencePort;
- (void)dismissViewControllerWithFlyback:(id)a0;
- (void)updateCustomControlsFrame;

@end
