@interface ABPersonViewAPIAdapter : ABAddressBookAPIAdapter

- (id)person;
- (void)setPerson:(id)a0;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(BOOL)a1;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(BOOL)a1 shouldShowSuggestedFields:(BOOL)a2;
- (void)_setStyleProvider:(id)a0;

@end
