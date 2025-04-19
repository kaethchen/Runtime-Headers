@class CNUIUndoableCommand;

@interface CNUISaveNonCuratedContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *command;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 containerIdentifier:(id)a2 ignoresGuardianRestrictions:(BOOL)a3;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
