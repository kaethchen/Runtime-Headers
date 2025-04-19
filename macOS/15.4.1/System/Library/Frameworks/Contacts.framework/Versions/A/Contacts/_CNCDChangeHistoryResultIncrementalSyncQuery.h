@class CNCDContactDictionaryPrefetchHelper;

@interface _CNCDChangeHistoryResultIncrementalSyncQuery : CNCDChangeHistoryResultQuery {
    CNCDContactDictionaryPrefetchHelper *_contactDictionaryPrefetchHelper;
}

+ (long long)contactsChangeTypeForPersistentChangeType:(long long)a0;
+ (long long)linkingContactsChangeTypeForPersistentChangeType:(long long)a0;

- (void).cxx_destruct;
- (void)configureResult:(id)a0 forTransactions:(id)a1;
- (id)contactChangeForHistoryChange:(id)a0;
- (id)contactChangesForHistoryChanges:(id)a0;
- (id)contactDictionaryForObjectID:(id)a0;
- (id)contactIdentifierForObjectID:(id)a0;
- (id)groupChangeForHistoryChange:(id)a0;
- (id)groupChangesForHistoryChanges:(id)a0;
- (id)groupDictionaryForObjectID:(id)a0;
- (id)groupIdentifierForObjectID:(id)a0;
- (id)initWithClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
- (id)nonUnifiedContactChangeForHistoryChange:(id)a0;
- (void)prefetchContactInfoForHistoryChanges:(id)a0;
- (id)unifiedContactChangeForHistoryChange:(id)a0;

@end
