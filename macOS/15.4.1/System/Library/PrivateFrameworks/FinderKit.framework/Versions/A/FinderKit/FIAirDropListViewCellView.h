@class NSView, NSString, FI_TButton, CNAvatarCache, NSObject, FI_TAirDropProgressView, FI_TTextField, NSLayoutConstraint, CNAvatarViewController;

@interface FIAirDropListViewCellView : NSTableCellView {
    FI_TAirDropProgressView *_progressView;
    NSView *_avatarView;
    FI_TButton *_cancelButton;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _pressedBinder;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _cancellableBinder;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _percentCompleteBinder;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _indeterminateProgressBinder;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _contactBinder;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _personNameBinder;
    CNAvatarViewController *_avatarViewController;
    BOOL _isCancellable;
    NSLayoutConstraint *_cancelButtonWidthConstraint;
    double _defaultCancelButtonWidth;
    NSLayoutConstraint *_subtitleToCancelButtonGapConstraint;
    double _defaultSubtitleToCancelButtonGap;
}

@property (readonly, retain) FI_TTextField *machineNameTxtFld;
@property (readonly, retain) FI_TTextField *statusTextField;
@property (readonly, retain) NSString *statusStr;
@property (retain) NSString *personNameStr;
@property (getter=isPressed) BOOL pressed;
@property (getter=isCancellable) BOOL cancellable;
@property (retain, nonatomic) CNAvatarCache *sharedAvatarCache;
@property (nonatomic) struct function<bool (FIAirDropListViewCellView *)> { struct __value_func<bool (FIAirDropListViewCellView *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } ignoreClickHandler;
@property (nonatomic) struct function<void (FIAirDropListViewCellView *)> { struct __value_func<void (FIAirDropListViewCellView *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } clickHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (BOOL)accessibilityPerformPress;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (id)iconImageView;
- (id)_hitTestWithLocalPoint:(const struct CGPoint { double x0; double x1; } *)a0;
- (BOOL)handleClick;

@end
