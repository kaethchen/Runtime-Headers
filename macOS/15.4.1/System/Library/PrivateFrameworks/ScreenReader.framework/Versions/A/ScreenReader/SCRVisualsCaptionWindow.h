@class AXVCaptionWindow, NSString, SCRCUserDefaults;

@interface SCRVisualsCaptionWindow : NSObject <AXVCaptionWindowActionDelegate, NSWindowDelegate>

@property (retain, nonatomic, setter=_setCaptionWindow:) AXVCaptionWindow *_captionWindow;
@property (nonatomic, setter=_setEnabled:) BOOL _enabled;
@property (nonatomic, setter=_setCaptionWindowNeedsDisplay:) BOOL _captionWindowNeedsDisplay;
@property (retain, nonatomic, setter=_setEnabledObserver:) id _enabledObserverRead;
@property (retain, nonatomic, setter=_setEnabledObserver:) id _enabledObserverWrite;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *captionText;
@property (nonatomic) BOOL temporarilyHidden;
@property (nonatomic) BOOL temporarilyCenteredAtBottomOfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)windowDidEndLiveResize:(id)a0;
- (void)windowDidMove:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowFrame;
- (struct CGPoint { double x0; double x1; })_originToCenterRectInMainWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeButtonPressedForCaptionWindow:(id)a0;
- (void)setCaptionFontSize:(double)a0;
- (void)_displayCaptionWindowIfNeeded;
- (void)_loadSavedWindowFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_savedWindowFrame;
- (void)_setCaptionWindowNeedsDisplay;
- (void)_windowFrameChanged;
- (BOOL)decreaseCaptionWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (BOOL)increaseCaptionWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (id)initWithUserDefaults:(id)a0 captionWindow:(id)a1;
- (BOOL)moveCaptionWindowInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (void)setEnabledAndAnnounceChange:(BOOL)a0;
- (void)setEnabledValue:(id)a0;
- (void)showCaptionWindow;

@end
