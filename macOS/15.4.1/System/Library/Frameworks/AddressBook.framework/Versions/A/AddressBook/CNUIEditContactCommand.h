@class CNContact;

@interface CNUIEditContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNContact *updatedContact;
@property (retain, nonatomic) CNContact *originalContact;

- (void).cxx_destruct;
- (id)actionName;
- (id)diffUpdatedContactToOriginalContact;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContact:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (id)mutableUpdatedContactWithSelfAsSnapshot;

@end
