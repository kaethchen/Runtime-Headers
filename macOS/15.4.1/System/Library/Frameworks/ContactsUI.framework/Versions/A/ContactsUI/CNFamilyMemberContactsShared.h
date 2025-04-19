@interface CNFamilyMemberContactsShared : NSObject

+ (id)addToLocalWhitelistOptionsMenuWithTarget:(id)a0 addFromLocalContactsItemAction:(SEL)a1 newContactItemAction:(SEL)a2;
+ (id)addToWhitelistOptionsMenuWithTarget:(id)a0 addFromFamilyMemberContactsAction:(SEL)a1 addFromLocalContactsItemAction:(SEL)a2 newContactItemAction:(SEL)a3 familyMember:(id)a4 addFromFamilyMemberContactsEnabled:(BOOL)a5;
+ (id)contactStoreDidChangeObservableWithSchedudlerProvider:(id)a0;
+ (id)contactWithIdentifier:(id)a0 keysToFetch:(id)a1 fromContactStore:(id)a2 schedulerProvider:(id)a3;
+ (long long)contactsUIFetchStatusFromContactsUICoreFetchStatus:(long long)a0;

@end
