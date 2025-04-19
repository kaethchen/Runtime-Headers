@interface QCInteractionPort : QCVirtualPort

+ (Class)baseClass;

- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (void)_setConnectedPort:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;

@end
