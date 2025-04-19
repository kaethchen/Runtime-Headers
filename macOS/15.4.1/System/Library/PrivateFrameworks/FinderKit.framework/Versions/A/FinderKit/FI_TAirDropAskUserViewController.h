@class NSStackView, NSString, FI_IAirDropProgressViewController, FI_TButton, FI_TImageView, FI_TTextField;

@interface FI_TAirDropAskUserViewController : FI_IAirDropStateViewController {
    struct TNSWeakPtr<FI_IAirDropProgressViewController> { FI_IAirDropProgressViewController *fWeakObject; } _weakProgressViewController;
    FI_TImageView *_imageView;
    FI_TTextField *_mainTextFld;
    NSStackView *_stackView;
    FI_TButton *_otherButton;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _mainTextStr;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _okButtonTitle;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _cancelButtonTitle;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _otherButtonTitle;
}

@property (weak, nonatomic) FI_IAirDropProgressViewController *progressViewController;
@property (copy, nonatomic) NSString *mainTextStr;
@property (copy, nonatomic) NSString *okButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *otherButtonTitle;
@property (readonly, nonatomic) int viewType;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)imageView;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)isInAskUserMode;
- (void)setViewType:(int)a0 withMainTextStr:(const void *)a1;

@end
