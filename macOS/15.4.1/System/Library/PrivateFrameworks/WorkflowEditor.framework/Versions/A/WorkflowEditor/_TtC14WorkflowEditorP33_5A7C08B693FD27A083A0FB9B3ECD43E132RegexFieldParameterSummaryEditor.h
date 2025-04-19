@interface _TtC14WorkflowEditorP33_5A7C08B693FD27A083A0FB9B3ECD43E132RegexFieldParameterSummaryEditor : WorkflowEditor.TextInputParameterSummaryEditor <WFParameterEventObserver>

- (void)parameterAttributesDidChange:(id)a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
