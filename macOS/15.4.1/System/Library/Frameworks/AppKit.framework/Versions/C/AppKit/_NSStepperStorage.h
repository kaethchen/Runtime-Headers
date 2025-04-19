@protocol NSStepperVisualProvider;

@interface _NSStepperStorage : _NSControlStorage {
    BOOL _valueWraps;
    BOOL _autorepeat;
    id<NSStepperVisualProvider> _visualProvider;
    double _increment;
}

- (void)dealloc;

@end
