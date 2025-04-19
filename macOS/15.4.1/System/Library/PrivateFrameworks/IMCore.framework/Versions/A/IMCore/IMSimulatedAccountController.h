@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)init;
- (void).cxx_destruct;
- (id)activeAccounts;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;

@end
