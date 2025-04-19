@interface IKViewController : NSViewController

@property BOOL isLoaded;

- (void)loadView;
- (void)invalidateContents;
- (void)didBecomeVisible;

@end
