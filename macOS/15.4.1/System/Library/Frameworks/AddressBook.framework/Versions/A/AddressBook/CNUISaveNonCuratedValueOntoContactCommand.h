@class CNUIUndoableCommand;

@interface CNUISaveNonCuratedValueOntoContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *command;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 isContactMeContact:(BOOL)a2 isContactReadOnly:(BOOL)a3 isContactCurated:(BOOL)a4 nonCuratedValueToSave:(id)a5 forKey:(id)a6 containerIdentifier:(id)a7 ignoresGuardianRestrictions:(BOOL)a8;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
