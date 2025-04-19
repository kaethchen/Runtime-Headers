@class NSString, CNContact;

@interface CNUIAddContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL personInserted;
@property (retain, nonatomic) NSString *accountIdentifier;

- (void).cxx_destruct;
- (id)actionName;
- (void)executeRedoWithCNSaveRequest:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContact:(id)a0 contactStore:(id)a1 accountIdentifier:(id)a2 personInserted:(BOOL)a3 ignoresGuardianRestrictions:(BOOL)a4;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
