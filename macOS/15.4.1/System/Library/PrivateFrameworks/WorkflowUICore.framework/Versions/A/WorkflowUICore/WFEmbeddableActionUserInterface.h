@class NSViewController;

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) NSViewController *contentViewController;

- (void).cxx_destruct;
- (void)presentContent:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
