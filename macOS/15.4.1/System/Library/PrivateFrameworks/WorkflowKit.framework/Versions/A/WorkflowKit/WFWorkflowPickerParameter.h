@class NSString, WFWorkflow;

@interface WFWorkflowPickerParameter : WFDynamicEnumerationParameter <WFWorkflowReferencing, WFDynamicEnumerationDataSource>

@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;
- (id)workflowForState:(id)a0;

@end
