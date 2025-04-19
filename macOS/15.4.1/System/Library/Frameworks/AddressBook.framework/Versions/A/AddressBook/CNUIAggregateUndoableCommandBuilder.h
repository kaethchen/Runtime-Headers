@class NSString, CNContactStore, NSMutableArray;

@interface CNUIAggregateUndoableCommandBuilder : NSObject

@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (retain, nonatomic) NSMutableArray *undoableCommands;

- (void).cxx_destruct;
- (id)build;
- (void)addContacts:(id)a0;
- (void)updateContacts:(id)a0;
- (void)deleteContacts:(id)a0;
- (void)addContacts:(id)a0 toContainer:(id)a1;
- (id)initWithActionName:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;

@end
