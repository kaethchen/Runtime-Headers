@class NSArray;

@interface WorkflowKit.SettingPickerParameter : WFEnumerationParameter {
    void /* unknown type, empty encoding */ datasource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_options;
}

@property (nonatomic, readonly) BOOL preferParameterValuePicker;
@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;

@end
