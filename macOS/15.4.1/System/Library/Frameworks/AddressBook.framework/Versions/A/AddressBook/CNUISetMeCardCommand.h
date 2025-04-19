@class NSString;

@interface CNUISetMeCardCommand : CNUIUndoableCommand

@property (retain, nonatomic) NSString *updatedContactIdentifier;
@property (retain, nonatomic) NSString *originalContactIdentifier;

- (void).cxx_destruct;
- (id)actionName;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;

@end
