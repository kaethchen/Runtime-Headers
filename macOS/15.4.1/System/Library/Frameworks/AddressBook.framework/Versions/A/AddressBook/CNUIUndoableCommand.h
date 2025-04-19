@class CNContactStore, NSString;

@interface CNUIUndoableCommand : ABBookUndoableCommand <CNUISaveRequestCommand>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (void)didExecute;
- (void)executeRedo;
- (void)executeUndo;
- (void)visit:(id)a0;
- (void)willExecute;
- (void)executeRedoWithCNSaveRequest:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
