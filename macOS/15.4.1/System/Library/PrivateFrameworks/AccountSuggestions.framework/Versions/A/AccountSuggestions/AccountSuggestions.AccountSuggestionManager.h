@interface AccountSuggestions.AccountSuggestionManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _allSuggestions;
    void /* unknown type, empty encoding */ _filteredSuggestions;
    void /* unknown type, empty encoding */ suggestionsByID;
    void /* unknown type, empty encoding */ deviceLastUsedDates;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ nonUpdatingMode;
    void /* unknown type, empty encoding */ kvs;
    void /* unknown type, empty encoding */ kvsSubscriber;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ animationWrapperBlock;
    void /* unknown type, empty encoding */ previousWorkItem;
    void /* unknown type, empty encoding */ accountTypesThatNeedProperties;
    void /* unknown type, empty encoding */ supportedAccountTypes;
    void /* unknown type, empty encoding */ locallySupportedAccountTypes;
}

- (void)reloadAccounts;
- (void)reloadDelay:(id)a0;

@end
