@interface ABDebugUndoManager : NSUndoManager

- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
