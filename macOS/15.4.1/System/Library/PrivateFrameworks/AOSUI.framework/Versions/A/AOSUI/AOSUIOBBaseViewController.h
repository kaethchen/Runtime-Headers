@class OBTemplateView, AOSUIAccountContactBaseViewModel, AOSUIOBTemplateContainerViewController;
@protocol AOSUIOBBaseViewControllerDelegate;

@interface AOSUIOBBaseViewController : NSViewController {
    AOSUIAccountContactBaseViewModel *_currentViewModel;
}

@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) AOSUIOBTemplateContainerViewController *containerView;
@property (weak, nonatomic) id<AOSUIOBBaseViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithViewModel:(id)a0;
- (void)_setupContainerView;
- (id)_setupContainerViewWithViewModel:(id)a0;
- (void)_setupTemplateView;
- (void)firstButtonPressed;
- (void)linkButtonPressed;
- (void)secondButtonPressed;
- (void)templateLinkButtonPressed;
- (void)updateViewContollerWithViewModel:(id)a0;

@end
