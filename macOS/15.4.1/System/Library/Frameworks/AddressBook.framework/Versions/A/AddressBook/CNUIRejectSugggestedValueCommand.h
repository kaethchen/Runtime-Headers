@class CNContactStore, CNLabeledValue;

@interface CNUIRejectSugggestedValueCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNLabeledValue *valueToReject;
@property (retain, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (id)initWithContactStore:(id)a0 suggestedValueToReject:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;

@end
