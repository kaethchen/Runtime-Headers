@class CNContactStore, CNLabeledValue, CNContact, NSString, CNUIEditContactCommand;

@interface CNUISaveNonCuratedValueOntoExistingContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) CNUIEditContactCommand *editContactCommand;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 nonCuratedValueToSave:(id)a2 forKey:(id)a3 ignoresGuardianRestrictions:(BOOL)a4;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
