@class NSString, ABAddressBook;

@interface ABDefaultAccountHidingPolicy : NSObject <ABAccountHidingPolicy> {
    ABAddressBook *_addressBook;
    unsigned long long _numberOfDefaultableAccounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isAccountEmpty:(id)a0;
- (void)analyzeAccount:(id)a0;
- (id)initWithAddressBook:(id)a0;
- (BOOL)isAccountEligibleForHiding:(id)a0;
- (BOOL)isDefaultAccount:(id)a0;
- (BOOL)shouldHideAccount:(id)a0;

@end
