@class SiriSharedUIViewStackContainer;

@interface SiriSharedUIViewStackContainerController : NSViewController <SiriSharedUIViewStackContainerDelegate>

@property (readonly, nonatomic) SiriSharedUIViewStackContainer *viewStackContainer;

- (void)loadView;
- (void)viewStackContainer:(id)a0 didBeginHostingChildViewController:(id)a1;
- (void)viewStackContainer:(id)a0 willBeginHostingChildViewController:(id)a1;

@end
