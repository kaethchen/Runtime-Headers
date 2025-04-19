@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (id)init;
- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
