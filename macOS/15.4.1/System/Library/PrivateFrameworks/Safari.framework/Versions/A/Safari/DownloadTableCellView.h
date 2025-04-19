@class NSTextField, NSTimer, NSProgressIndicator, NSImage, DownloadProgressEntry, ConfigurableVibrancyButton;

@interface DownloadTableCellView : NSTableCellView {
    NSProgressIndicator *_progressIndicator;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _iconFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _filenameFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _statusFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _revealFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _stopResumeFrame;
    DownloadProgressEntry *_entry;
    NSTimer *_progressTimer;
    int _buttonState;
    NSTextField *_filenameTextField;
    NSTextField *_statusTextField;
    NSImage *_iconImage;
    long long _revealTrackingRectTag;
    long long _stopResumeTrackingRectTag;
    ConfigurableVibrancyButton *_stopResumeButton;
    ConfigurableVibrancyButton *_revealButton;
}

+ (double)rowHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_enclosingTableView;
- (void)_removeTrackingRects;
- (void)_updateButtons;
- (void)_updateTrackingRects;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityContents;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)entry;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)open:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateTextColor;
- (id)initWithEntry:(id)a0;
- (id)_openHelpString;
- (void)_startProgressAnimationIfNeeded;
- (void)_drawIcon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_errorSummary;
- (id)_rateString;
- (void)_reveal:(id)a0;
- (id)_revealHelpString;
- (void)_startDiskCopyAnimation;
- (void)_startProgressAnimation;
- (id)_statusAndRateText;
- (id)_statusAndTimeRemainingText;
- (id)_statusText;
- (void)_stopProgressAnimation;
- (void)_stopProgressAnimationTimer;
- (void)_stopResume:(id)a0;
- (id)_stopResumeAccessibilityDescription;
- (id)_stopResumeHelpString;
- (id)_timeRemainingString;
- (void)_updateButtonStateAndStatusField;
- (void)_updateFrames;
- (void)_updateIconAndFilename;
- (void)_updateProgressAnimation;
- (void)_updateStatusField;
- (double)bestWidth;
- (void)currentFileDidChange;
- (id)displayableFileType;
- (void)progressDidChange;
- (void)stageDidChange;

@end
