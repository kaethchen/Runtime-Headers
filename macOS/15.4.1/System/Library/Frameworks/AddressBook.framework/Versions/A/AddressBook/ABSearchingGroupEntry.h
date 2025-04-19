@class NSString, ABAccount, ABAddressBook;
@protocol ABSearchOperationsFactory;

@interface ABSearchingGroupEntry : ABGroupEntry <ABContactSearching> {
    ABAccount *_account;
    id<ABSearchOperationsFactory> _operationsFactory;
    ABAddressBook *_addressBookForCreatingGroups;
}

@property (readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canSelect;
- (id)selectHelperWithFactory:(id)a0;
- (id)actionScope;
- (id)addressBookForCreatingGroups;
- (BOOL)canCreateGroup;
- (id)createHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 operationsFactory:(id)a2 addressBookForCreatingGroups:(id)a3;
- (BOOL)isAvailableInTimeMachine;
- (id)searchOperationsForString:(id)a0 delegate:(id)a1;

@end
