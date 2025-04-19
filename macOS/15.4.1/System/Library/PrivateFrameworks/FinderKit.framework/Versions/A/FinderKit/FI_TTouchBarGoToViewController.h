@class FI_TButton;
@protocol TTouchBarGoToViewDelegate;

@interface FI_TTouchBarGoToViewController : FI_TTouchBarViewController {
    FI_TButton *_goButton;
    FI_TButton *_cancelButton;
    BOOL tornDown;
}

@property (weak, nonatomic) id<TTouchBarGoToViewDelegate> delegate;

- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)isTornDown;
- (void)setTornDown:(BOOL)a0;
- (void)configTouchBarButtons;

@end
