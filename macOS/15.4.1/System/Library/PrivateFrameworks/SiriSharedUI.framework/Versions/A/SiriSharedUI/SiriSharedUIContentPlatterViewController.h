@class NSArray, SiriSharedUIContentPlatterView;

@interface SiriSharedUIContentPlatterViewController : NSViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;

- (void).cxx_destruct;
- (void)loadView;
- (void)appendSeparatorToViewControllers:(id)a0 forNextViewController:(id)a1;

@end
