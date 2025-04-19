@class NSString, ABPersonListController, ABMergeAndLinkPeopleCommand, ABCommandExecutor, ABAddressBook;

@interface ABPersonListMergeContactsAction : NSObject <ABUserInterfaceAction>

@property (readonly, nonatomic) ABMergeAndLinkPeopleCommand *mergeAndLinkCommand;
@property (readonly, nonatomic) ABCommandExecutor *commandExecutor;
@property (readonly, weak, nonatomic) ABPersonListController *personListController;
@property (readonly, nonatomic) ABAddressBook *addressBook;
@property (readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
@property (nonatomic) BOOL executionWasAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
