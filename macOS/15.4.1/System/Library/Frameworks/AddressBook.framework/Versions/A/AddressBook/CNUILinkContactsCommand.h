@class CNUIUndoableCommand;

@interface CNUILinkContactsCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *command;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (id)initWithContactsToLink:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (id)initWithContactsToLink:(id)a0 linkIdentifier:(id)a1 contactStore:(id)a2 ignoresGuardianRestrictions:(BOOL)a3;

@end
