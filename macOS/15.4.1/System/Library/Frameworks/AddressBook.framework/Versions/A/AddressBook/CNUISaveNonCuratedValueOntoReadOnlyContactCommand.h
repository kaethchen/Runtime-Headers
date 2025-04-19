@class CNContactStore, CNUIUndoableCommand, CNLabeledValue;

@interface CNUISaveNonCuratedValueOntoReadOnlyContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *command;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNLabeledValue *labeledValue;

- (void).cxx_destruct;
- (id)copyOfContactWithNameValuesAndChangesOnly:(id)a0 containingNonCuratedValueToSave:(id)a1 forKey:(id)a2;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 nonCuratedValueToSave:(id)a2 forKey:(id)a3 ignoresGuardianRestrictions:(BOOL)a4;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
