@class NSString;

@interface _NSMultipleSelectionMatrixPlugin : _NSMatrixPlugin <_NSMultipleSelectionBinderPlugin> {
    struct __multipleSelectionMatrixPluginFlags { unsigned char _testedMode : 1; unsigned int _reservedMultipleSelectionMatrixPlugin : 31; } _multipleSelectionMatrixPluginFlags;
    unsigned long long _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUsableWithObject:(id)a0;

- (unsigned long long)allowedValueBindingMask;
- (void)connectionWasEstablished:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;

@end
