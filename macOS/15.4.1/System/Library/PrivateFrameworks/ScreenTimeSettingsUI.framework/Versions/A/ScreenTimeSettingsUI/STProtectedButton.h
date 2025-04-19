@protocol STProtectedControlDelegate;

@interface STProtectedButton : NSButton

@property (weak) id<STProtectedControlDelegate> actionCancelDelegate;

- (void).cxx_destruct;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
