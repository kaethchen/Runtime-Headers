@interface PassKitMacHelper.TransactionsModel : NSObject <PKDashboardTransactionFetcherDelegate, PKAccountServiceObserver> {
    void /* unknown type, empty encoding */ pass;
    void /* unknown type, empty encoding */ settingsModel;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ currentYear;
    void /* unknown type, empty encoding */ currentMonth;
    void /* unknown type, empty encoding */ _transactions;
    void /* unknown type, empty encoding */ _yearlyGroups;
    void /* unknown type, empty encoding */ _monthlyGroups;
    void /* unknown type, empty encoding */ _notificationServiceUpdatesEnabled;
    void /* unknown type, empty encoding */ _account;
    void /* unknown type, empty encoding */ _appleCardDetailInfo;
    void /* unknown type, empty encoding */ _transactionSourceCollection;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ updateUsersRequestQueue;
    void /* unknown type, empty encoding */ requestInFlight;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;
- (void)accountDidUpdate;
- (void)passSettingsDidChangeWithNotification:(id)a0;

@end
