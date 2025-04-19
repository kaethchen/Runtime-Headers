@class AFUIMenuView;
@protocol AFUIAutoFillRootVCDelegate;

@interface AFUIAutoFillRootViewController : NSViewController <AFUIAutoFillContentController>

@property (weak, nonatomic) id<AFUIAutoFillRootVCDelegate> delegate;
@property (retain, nonatomic) AFUIMenuView *view;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)viewDidLoad;

@end
