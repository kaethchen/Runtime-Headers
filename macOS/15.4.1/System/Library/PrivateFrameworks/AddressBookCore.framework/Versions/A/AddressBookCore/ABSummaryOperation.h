@class ABAccountRepository, NSString, NSObject;
@protocol OS_os_log;

@interface ABSummaryOperation : NSOperation {
    ABAccountRepository *_accountRepository;
    NSString *_accountIdentifier;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (void)main;
- (void)exportSummary:(id)a0 accountName:(id)a1;
- (id)initWithAccountRepository:(id)a0 accountIdentifier:(id)a1;
- (id)makeAccount;
- (id)makeAddressBookForAccount:(id)a0;
- (id)makeSummaryOfAddressBook:(id)a0;
- (id)outputURLWithAccountName:(id)a0;

@end
