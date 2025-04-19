@class NSColor, ICAttachment, NSObject;

@interface ICAudioAttachmentView : ICAttachmentView {
    void /* unknown type, empty encoding */ needsRelayoutWhenMovingToWindow;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ attachmentObserver;
    void /* unknown type, empty encoding */ brickDelegate;
    void /* unknown type, empty encoding */ summaryViewModel;
    void /* unknown type, empty encoding */ feedbackDelegateController;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSColor *highlightColor;
@property (nonatomic, readonly) NSObject *icaxAudioPlayerViewAccessibilityElement;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomContent;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)menuForEvent:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)saveAttachment:(id)a0;
- (void)_performStandardShareMenuItem:(id)a0;
- (void)deleteAttachment:(id)a0;
- (void)didChangeMedia;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (id)_playerViewAccessibilityElement;
- (void)appendRecording:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAttachment:(id)a1 textContainer:(id)a2 forManualRendering:(BOOL)a3;
- (BOOL)rightClickSelectsAttachment;
- (void)viewSummary:(id)a0;

@end
