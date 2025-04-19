@interface IKAnimationData : NSObject {
    id _initialValue;
    id _finalValue;
    id _currentValue;
}

- (void)dealloc;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (id)initialValue;
- (void)setInitialValue:(id)a0;
- (id)finalValue;
- (void)setFinalValue:(id)a0;

@end
