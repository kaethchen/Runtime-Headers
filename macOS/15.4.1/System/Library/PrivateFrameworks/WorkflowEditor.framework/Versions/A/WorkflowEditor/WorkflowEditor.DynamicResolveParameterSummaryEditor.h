@interface WorkflowEditor.DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <NSPopoverDelegate, WorkflowEditor.ParameterValuePickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ presentedPopover;
}

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)parameterValuePickerDidCancelWithViewController:(id)a0;
- (void)parameterValuePickerDidStartSelectingMagicVariableWithViewController:(id)a0;
- (void)parameterValuePickerWithViewController:(id)a0 didFinishWithParameterState:(id)a1;

@end
