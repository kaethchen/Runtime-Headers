@class WBSAutoFillAssociatedDomainsManager, NSHashTable, IMOneTimeCodeAccelerator, NSTimer, NSMutableDictionary, NSObject, EMOneTimeCodeAccelerator, NSMapTable;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
    NSMutableDictionary *_currentReceivedOneTimeCodesBySource;
    EMOneTimeCodeAccelerator *_mailOneTimeCodeAccelerator;
    BOOL _isOneTimeCodeAutoDeletionEnabled;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic) BOOL isOneTimeCodeAutoDeletionEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)_appWithAppIdentifierIsWebBrowser:(id)a0;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;
- (void)_consumeOneTimeCode:(id)a0;
- (long long)_domainBindingForRecievedOneTimeCode:(id)a0 forAppWithIdentifier:(id)a1 websiteURL:(id)a2 hasDomainBinding:(BOOL *)a3;
- (void)_fetchOneTimeCodeAutoDeletionPreference;
- (id)_ignoredTimestamps;
- (id)_mostRecentlyReceivedOneTimeCode;
- (void)_notifyOneTimeCodeObserver;
- (void)_processOneTimeCodeFromMail:(id)a0 withTimestamp:(id)a1 andMessageID:(long long)a2;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (void)_processReceivedOneTimeCode:(id)a0 fromSource:(long long)a1;
- (id)_savedAccountsWithPasswordsForURL:(id)a0 inContext:(id)a1;
- (id)_secureURLWithDomain:(id)a0;
- (BOOL)_shouldIgnoreOneTimeCode:(id)a0;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)a0 context:(id)a1;
- (void)_startGeneratorTimer;
- (void)_stopGeneratorTimer;
- (long long)_url:(id)a0 matchesURLFromOriginBoundCode:(id)a1;
- (void)_validateCurrentOneTimeCodes;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (void)consumeCurrentOneTimeCode;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)a0;
- (void)consumeOneTimeCode:(id)a0;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1 inContext:(id)a2;
- (id)currentOneTimeCodesWithAppIdentifier:(id)a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)didFocusOneTimeCodeField;
- (void)removeObserverForOneTimeCode:(id)a0;
- (void)silenceOneTimeCode:(id)a0;
- (void)test_deliverOneTimeCode:(id)a0 fromSource:(long long)a1;

@end
