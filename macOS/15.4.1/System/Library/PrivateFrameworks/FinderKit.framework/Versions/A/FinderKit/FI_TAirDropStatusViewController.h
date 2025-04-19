@class NSString, FI_TProgressIndicator, FI_TButton, FI_TTextField;

@interface FI_TAirDropStatusViewController : FI_IAirDropStateViewController {
    FI_TProgressIndicator *_progress;
    FI_TTextField *_mainTextFld;
    FI_TTextField *_subTextFld;
    FI_TButton *_cancelButton;
}

@property (copy, nonatomic) NSString *mainTextStr;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } mainTextTruncateInRange;
@property (copy, nonatomic) NSString *subTextStr;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } subTextTruncateInRange;
@property (nonatomic) double percentComplete;

- (void).cxx_destruct;
- (void)configureView;

@end
