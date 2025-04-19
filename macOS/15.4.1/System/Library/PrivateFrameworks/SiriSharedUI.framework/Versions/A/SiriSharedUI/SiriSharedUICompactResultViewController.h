@class SiriSharedUICompactResultView, SiriSharedUIContentPlatterViewController;

@interface SiriSharedUICompactResultViewController : NSViewController

@property (readonly, nonatomic) SiriSharedUICompactResultView *compactResultView;
@property (copy, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;

- (void).cxx_destruct;
- (void)loadView;

@end
