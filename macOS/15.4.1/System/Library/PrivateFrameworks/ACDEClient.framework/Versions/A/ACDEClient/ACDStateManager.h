@class NSArray, ACDBaseViewController, NSWindow;

@interface ACDStateManager : NSObject

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) ACDBaseViewController *presentViewController;
@property (nonatomic) NSWindow *window;

- (void)dealloc;
- (void)removeConstraints;
- (void)setCurrentViewController:(id)a0;
- (void)addConstraintsToView:(id)a0;
- (void)setCurrentViewController:(id)a0 completion:(id /* block */)a1;

@end
