@interface WorkflowEditor.LocationParameterSummaryEditor : WFModuleSummaryEditor <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ lastState;
    void /* unknown type, empty encoding */ lastEnteredText;
    void /* unknown type, empty encoding */ autocompleteCoordinator;
}

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (id)menuForTextEntry;
- (void)textEntryDidFinish;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
