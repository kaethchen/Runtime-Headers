@class NSString, NSIndexPath;

@interface _NSValueBinderPlugin : _NSBinderPlugin <_NSValueBinderPlugin> {
    struct __valueBinderPluginFlags { unsigned char _isActionCellPlugin : 1; unsigned char _isFormatterPlugin : 1; unsigned char _isObjectValueInvalidationCapable : 1; unsigned int _reservedValueBinderPlugin : 29; } _valueBinderPluginFlags;
    unsigned long long _affectedIndex;
    NSIndexPath *_affectedIndexPath;
    Class _valueClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUsableWithObject:(id)a0;

- (void)dealloc;
- (BOOL)isBooleanValueBindingForObject:(id)a0;
- (void)_actionHasBegun:(id)a0 atIndex:(unsigned long long)a1;
- (void)_actionHasBegun:(id)a0 atIndexPath:(id)a1;
- (Class)_valueClass:(id)a0;
- (void)actionHasBegun:(id)a0 sender:(id)a1;
- (void)actionHasEnded:(id)a0 sender:(id)a1;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)applyObjectValue:(id *)a0 forBinding:(id)a1 operation:(int *)a2 needToRunAlert:(BOOL *)a3 error:(id *)a4;
- (id)binderReferenceObjectValue;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)a0;
- (BOOL)canSupportMinAndMaxForObject:(id)a0;
- (BOOL)conditionalBehaviorOffByDefault:(id)a0;
- (void)connectionWasBroken:(id)a0;
- (void)connectionWasEstablished:(id)a0;
- (struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })editedMode:(id)a0 forEditingOrAction:(BOOL)a1;
- (id)editingBinderForControl:(id)a0;
- (void)editingHasBegun:(id)a0;
- (void)editingHasEnded:(id)a0;
- (void)editingWasAborted:(id)a0;
- (id)formattedValueInObject:(id)a0 errorEncountered:(BOOL *)a1 error:(id *)a2;
- (id)formatterOfObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (void)invalidateObjectValueInObject:(id)a0;
- (BOOL)isObjectTableColumnDataCell:(id)a0;
- (BOOL)needsAction;
- (BOOL)needsDelegate;
- (id)objectMechanismsRequired;
- (id)objectValueInvalidationCapableObjectForObject:(id)a0;
- (BOOL)prefersEnabledOverEditable:(id)a0;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (BOOL)shouldIgnoreAction:(id)a0;
- (BOOL)shouldProvideSortDescriptor:(id)a0 optionsAdvertisingOnly:(BOOL)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (void)storeMin:(BOOL)a0 andMax:(BOOL)a1 ofObject:(id)a2;
- (BOOL)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (BOOL)updateCellOrControl:(id)a0 forMinValue:(id)a1;
- (Class)valueClass:(id)a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (id)viewForObject:(id)a0;

@end
