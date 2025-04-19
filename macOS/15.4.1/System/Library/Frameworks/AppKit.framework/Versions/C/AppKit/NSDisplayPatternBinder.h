@class NSString;

@interface NSDisplayPatternBinder : NSBinder {
    NSString *_displayPattern;
}

+ (id)bindingCategory;
+ (id)_cellOrControlForObject:(id)a0;
+ (id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)a0;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)_adjustObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 triggerRedisplay:(BOOL)a2;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_dealloc;
- (BOOL)_handleObservingRefresh;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_patternForBinding:(id)a0;
- (void)_setDisplayValue:(id)a0 object:(id)a1 triggerRedisplay:(BOOL)a2;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (id)availableBindings;
- (id)displayPattern;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)removeBinding:(id)a0;
- (void)setDisplayPattern:(id)a0;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;
- (Class)valueClassForBinding:(id)a0;

@end
