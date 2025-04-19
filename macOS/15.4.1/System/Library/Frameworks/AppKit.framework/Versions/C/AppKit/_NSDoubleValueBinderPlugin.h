@class NSNumber;

@interface _NSDoubleValueBinderPlugin : _NSValueBinderPlugin {
    NSNumber *_originalMinValue;
    NSNumber *_originalMaxValue;
}

- (void)dealloc;
- (Class)_valueClass:(id)a0;
- (BOOL)canSupportMinAndMaxForObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (id)objectMechanismsRequired;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (void)storeMin:(BOOL)a0 andMax:(BOOL)a1 ofObject:(id)a2;
- (BOOL)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (BOOL)updateCellOrControl:(id)a0 forMinValue:(id)a1;

@end
