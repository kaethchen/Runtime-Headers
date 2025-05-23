@class NSString, SGFuture;
@protocol SGDSuggestManagerAllProtocol;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceIpsosProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceRemindersProtocol, SGSuggestionsServiceDeliveriesProtocol, SGSuggestionsServiceURLsProtocol, SGSuggestionsServiceSpotlightKnowledgeProtocol> {
    SGFuture *_daemonConnectionFuture;
    id<SGDSuggestManagerAllProtocol> _managerForTesting;
    BOOL _keepDirty;
    NSString *_machServiceName;
    BOOL _queuesRequestsIfBusy;
    double _syncTimeout;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _syncTimeoutLock;
    SGFuture *_snapshotFuture;
}

+ (BOOL)hasEntitlement:(id)a0;
+ (BOOL)isHarvestingSupported;
+ (id)serviceForContacts;
+ (id)serviceForIpsos;
+ (id)serviceForEvents;
+ (void)prepareForQuery;
+ (id)serviceForFides;
+ (id)_daemonConnectionFutureForMachServiceName:(id)a0 protocol:(id)a1 useCache:(BOOL)a2;
+ (id)daemonConnections;
+ (id)inProcessSuggestManager;
+ (id)serviceForDeliveries;
+ (id)serviceForInternal;
+ (id)serviceForMail;
+ (id)serviceForMessages;
+ (id)serviceForReminders;
+ (id)serviceForSpotlightKnowledge;
+ (id)serviceForURLs;
+ (void)setInProcessSuggestManager:(id)a0;

- (void).cxx_destruct;
- (id)powerState;
- (BOOL)sleep:(id *)a0;
- (void)setSyncTimeout:(double)a0;
- (double)syncTimeout;
- (BOOL)rejectRecord:(id)a0 rejectionUI:(int)a1 error:(id *)a2;
- (id)cnContactMatchesForRecordIds:(id)a0 error:(id *)a1;
- (BOOL)confirmContactDetailRecord:(id)a0 error:(id *)a1;
- (BOOL)confirmRecord:(id)a0 error:(id *)a1;
- (id)contactFromRecordID:(id)a0 error:(id *)a1;
- (id)contactMatchesByEmailAddress:(id)a0 error:(id *)a1;
- (id)contactMatchesByPhoneNumber:(id)a0 error:(id *)a1;
- (void)contactMatchesBySocialProfile:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactMatchesWithContactIdentifier:(id)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (id)originFromRecordId:(id)a0 error:(id *)a1;
- (BOOL)rejectContactDetailRecord:(id)a0 rejectionUI:(int)a1 error:(id *)a2;
- (id)suggestContactMatchesWithFullTextSearch:(id)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (id)suggestContactMatchesWithMessagingPrefix:(id)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (BOOL)ping:(id *)a0;
- (id)titleSuggestionForMessage:(id)a0 error:(id *)a1;
- (BOOL)confirmEventByRecordId:(id)a0 error:(id *)a1;
- (void)confirmEventByRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)eventFromUniqueId:(id)a0 withCompletion:(id /* block */)a1;
- (void)logEventInteractionForEventWithUniqueKey:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)rejectEventByRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)addInteractions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (void)logMetricSuggestedContactDetailUsed:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 prefix:(id)a2 limitTo:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (id)registerContactsChangeObserver:(id /* block */)a0;
- (BOOL)rejectReminderByRecordId:(id)a0 error:(id *)a1;
- (BOOL)reportMessagesFound:(id)a0 lost:(id)a1 error:(id *)a2;
- (id)saliencyFromEmailHeaders:(id)a0 error:(id *)a1;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)a0 limit:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)suggestContactMatchesWithFullTextSearch:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)_clearHarvestStoreCache;
- (int)_confirmRejectUI;
- (id)_daemonConnection;
- (id)_remoteSuggestionManager;
- (void)addInteractions:(id)a0 bundleId:(id)a1 withCompletion:(id /* block */)a2;
- (void)addSearchableItemMetadata:(id)a0 htmlData:(id)a1 completion:(id /* block */)a2;
- (BOOL)addSearchableItems:(id)a0 error:(id *)a1;
- (void)addSearchableItems:(id)a0 withCompletion:(id /* block */)a1;
- (id)allContactsLimitedTo:(unsigned long long)a0 error:(id *)a1;
- (void)allContactsLimitedTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)allContactsWithSnippets:(BOOL)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (void)allContactsWithSnippets:(BOOL)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)allDeliveriesWithLimit:(unsigned long long)a0 error:(id *)a1;
- (void)allDeliveriesWithLimit:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)allEventsLimitedTo:(unsigned long long)a0 error:(id *)a1;
- (void)allEventsLimitedTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)allRemindersLimitedTo:(unsigned long long)a0 error:(id *)a1;
- (void)allRemindersLimitedTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)birthdayExtractionsForInterval:(id)a0 error:(id *)a1;
- (void)birthdayExtractionsForInterval:(id)a0 withCompletion:(id /* block */)a1;
- (id)cacheSnapshotFuture;
- (id)celebrationExtractionsForInterval:(id)a0 error:(id *)a1;
- (void)celebrationExtractionsForInterval:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)clearCachesFully:(BOOL)a0 error:(id *)a1;
- (void)clearCachesFully:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)cnContactMatchesForRecordId:(id)a0 error:(id *)a1;
- (void)cnContactMatchesForRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)cnContactMatchesForRecordIds:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)confirmContact:(id)a0 error:(id *)a1;
- (void)confirmContact:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)confirmContactDetailRecord:(id)a0 confirmationUI:(int)a1 error:(id *)a2;
- (void)confirmContactDetailRecord:(id)a0 confirmationUI:(int)a1 withCompletion:(id /* block */)a2;
- (void)confirmContactDetailRecord:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)confirmEvent:(id)a0 error:(id *)a1;
- (void)confirmEvent:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)confirmRealtimeReminder:(id)a0 error:(id *)a1;
- (void)confirmRealtimeReminder:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmRecord:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)confirmReminderByRecordId:(id)a0 error:(id *)a1;
- (void)confirmReminderByRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactFromRecordID:(id)a0;
- (void)contactFromRecordID:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactMatchesByEmailAddress:(id)a0;
- (void)contactMatchesByEmailAddress:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactMatchesByPhoneNumber:(id)a0;
- (void)contactMatchesByPhoneNumber:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactMatchesBySocialProfile:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)contactMatchesBySocialProfile:(id)a0 bundleIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (id)contactMatchesBySocialProfile:(id)a0 error:(id *)a1;
- (id)contactMatchesWithContact:(id)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (void)contactMatchesWithContact:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)contactMatchesWithContactIdentifier:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)contactMatchesWithContactIdentifiers:(id)a0 limitTo:(unsigned long long)a1 error:(id *)a2;
- (void)contactMatchesWithContactIdentifiers:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)daemonExit:(id *)a0;
- (void)daemonExitWithCompletion:(id /* block */)a0;
- (void)deleteCloudKitZoneWithCompletion:(id /* block */)a0;
- (BOOL)deleteEventByRecordId:(id)a0 error:(id *)a1;
- (void)deleteEventByRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 completion:(id /* block */)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 groupIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (BOOL)deregisterContactsChangeObserverWithToken:(id)a0;
- (BOOL)deregisterEventsChangeObserverWithToken:(id)a0;
- (id)dissectAttachmentsFromSearchableItem:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)dissectAttachmentsFromSearchableItem:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)emailAddressIsSignificant:(id)a0 error:(id *)a1;
- (void)emailAddressIsSignificant:(id)a0 withCompletion:(id /* block */)a1;
- (void)evaluateRecipe:(id)a0 attachments:(id)a1 completion:(id /* block */)a2;
- (id)eventFromRecordID:(id)a0 error:(id *)a1;
- (void)eventFromRecordID:(id)a0 withCompletion:(id /* block */)a1;
- (id)eventFromUniqueId:(id)a0 error:(id *)a1;
- (void)eventsForSchemas:(id)a0 usingStore:(id)a1 completion:(id /* block */)a2;
- (id)extractAttributesAndDonate:(id)a0 error:(id *)a1;
- (void)extractAttributesAndDonate:(id)a0 withCompletion:(id /* block */)a1;
- (id)foundInStringForRecordId:(id)a0 style:(unsigned char)a1 error:(id *)a2;
- (void)foundInStringForRecordId:(id)a0 style:(unsigned char)a1 withCompletion:(id /* block */)a2;
- (id)harvestedSuggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)harvestedSuggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 attributes:(id)a2 toRecipients:(id)a3 ccRecipients:(id)a4 bccRecipients:(id)a5 originalToRecipients:(id)a6 originalCcRecipients:(id)a7 attachments:(id)a8 error:(id *)a9;
- (void)identifyComposeWarningsFromSubject:(id)a0 content:(id)a1 attributes:(id)a2 toRecipients:(id)a3 ccRecipients:(id)a4 bccRecipients:(id)a5 originalToRecipients:(id)a6 originalCcRecipients:(id)a7 attachments:(id)a8 withCompletion:(id /* block */)a9;
- (id)identifyFollowUpWarningFromSubject:(id)a0 body:(id)a1 date:(id)a2 error:(id *)a3;
- (void)identifyFollowUpWarningFromSubject:(id)a0 body:(id)a1 date:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithMachServiceName:(id)a0 protocol:(id)a1;
- (id)initWithMachServiceName:(id)a0 protocol:(id)a1 useCache:(BOOL)a2;
- (id)interactionStoreLookupForDetail:(id)a0 error:(id *)a1;
- (void)interactionStoreLookupForDetail:(id)a0 withCompletion:(id /* block */)a1;
- (id)ipsosMessagesFromSearchableItems:(id)a0 error:(id *)a1;
- (void)ipsosMessagesFromSearchableItems:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isEnabledWithError:(id *)a0;
- (void)isEventCandidateForURL:(id)a0 andTitle:(id)a1 containsSchemaOrg:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)isEventCandidateForURL:(id)a0 andTitle:(id)a1 withCompletion:(id /* block */)a2;
- (void)keepDirty:(BOOL)a0;
- (void)keysForSchemas:(id)a0 completion:(id /* block */)a1;
- (BOOL)launchAppForSuggestedEventUsingLaunchInfo:(id)a0 error:(id *)a1;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)a0 withCompletion:(id /* block */)a1;
- (id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)a0 sourceURL:(id)a1 clientLocale:(id)a2 error:(id *)a3;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)a0 sourceURL:(id)a1 clientLocale:(id)a2 withCompletion:(id /* block */)a3;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void)logMetricAutocompleteResult:(int)a0 recordId:(id)a1 contactIdentifier:(id)a2 bundleId:(id)a3;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)logMetricContactCreated:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)logMetricContactSearchResult:(int)a0 recordId:(id)a1 contactIdentifier:(id)a2 bundleId:(id)a3;
- (void)logMetricContactSearchResultSelected:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)a0;
- (void)logMetricSuggestedContactDetailShown:(id)a0 contactIdentifier:(id)a1 bundleId:(id)a2;
- (void)logSuggestionInteractionForRecordId:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (BOOL)logUserCreatedReminderTitle:(id)a0 error:(id *)a1;
- (void)logUserCreatedReminderTitle:(id)a0 withCompletion:(id /* block */)a1;
- (void)messagesToRefreshWithCompletion:(id /* block */)a0;
- (id)messagesToRefreshWithError:(id *)a0;
- (id)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 error:(id *)a3;
- (id)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 onlySignificant:(BOOL)a3 error:(id *)a4;
- (id)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 onlySignificant:(BOOL)a3 supportsInfoLookup:(BOOL)a4 error:(id *)a5;
- (void)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 onlySignificant:(BOOL)a3 supportsInfoLookup:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 onlySignificant:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)namesForDetail:(id)a0 limitTo:(unsigned long long)a1 prependMaybe:(BOOL)a2 withCompletion:(id /* block */)a3;
- (id)namesForDetailCaches;
- (void)originFromRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)planReceivedFromServerWithPayload:(id)a0 completion:(id /* block */)a1;
- (id)predictedCCEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 error:(id *)a5;
- (void)predictedCCEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 withCompletion:(id /* block */)a5;
- (id)predictedToEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 error:(id *)a5;
- (void)predictedToEmailAddressesWithToAddresses:(id)a0 ccAddresses:(id)a1 fromAddress:(id)a2 date:(double)a3 bounds:(id)a4 withCompletion:(id /* block */)a5;
- (BOOL)prepareForRealtimeExtraction:(id *)a0;
- (void)prepareForRealtimeExtractionWithCompletion:(id /* block */)a0;
- (BOOL)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)a0 toValues:(id)a1 error:(id *)a2;
- (void)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)a0 toValues:(id)a1 withCompletion:(id /* block */)a2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1 completion:(id /* block */)a2;
- (BOOL)queuesRequestsIfBusy;
- (void)realtimeSuggestionsFromURL:(id)a0 title:(id)a1 HTMLPayload:(id)a2 extractionDate:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)rebuildNamesForDetailCache:(id *)a0;
- (void)rebuildNamesForDetailCacheWithCompletion:(id /* block */)a0;
- (id)recentURLsWithLimit:(unsigned int)a0 error:(id *)a1;
- (void)recentURLsWithLimit:(unsigned int)a0 withCompletion:(id /* block */)a1;
- (id)registerEventsChangeObserver:(id /* block */)a0;
- (BOOL)registerURLFeedback:(unsigned char)a0 absoluteURL:(id)a1 error:(id *)a2;
- (void)registerURLFeedback:(unsigned char)a0 absoluteURL:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)rejectContact:(id)a0 error:(id *)a1;
- (BOOL)rejectContact:(id)a0 rejectionUI:(int)a1 error:(id *)a2;
- (void)rejectContact:(id)a0 rejectionUI:(int)a1 withCompletion:(id /* block */)a2;
- (void)rejectContact:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)rejectContactDetailRecord:(id)a0 error:(id *)a1;
- (void)rejectContactDetailRecord:(id)a0 rejectionUI:(int)a1 withCompletion:(id /* block */)a2;
- (void)rejectContactDetailRecord:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)rejectEvent:(id)a0 error:(id *)a1;
- (void)rejectEvent:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)rejectEventByRecordId:(id)a0 error:(id *)a1;
- (BOOL)rejectRealtimeReminder:(id)a0 error:(id *)a1;
- (void)rejectRealtimeReminder:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)rejectRecord:(id)a0 error:(id *)a1;
- (void)rejectRecord:(id)a0 rejectionUI:(int)a1 withCompletion:(id /* block */)a2;
- (void)rejectRecord:(id)a0 withCompletion:(id /* block */)a1;
- (void)rejectReminderByRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)reminderAlarmTriggeredForRecordId:(id)a0 error:(id *)a1;
- (void)reminderAlarmTriggeredForRecordId:(id)a0 withCompletion:(id /* block */)a1;
- (id)reminderTitleForContent:(id)a0 error:(id *)a1;
- (void)reminderTitleForContent:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)removeAllStoredPseudoContacts:(id *)a0;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)a0;
- (id)reportMailIntelligenceFollowUpUserEngagement:(long long)a0 forStringFromFollowUpWarning:(id)a1 error:(id *)a2;
- (void)reportMailIntelligenceFollowUpUserEngagement:(long long)a0 forStringFromFollowUpWarning:(id)a1 withCompletion:(id /* block */)a2;
- (void)reportMessagesFound:(id)a0 lost:(id)a1 withCompletion:(id /* block */)a2;
- (id)reportUserEngagement:(BOOL)a0 forWarning:(id)a1 error:(id *)a2;
- (void)reportUserEngagement:(BOOL)a0 forWarning:(id)a1 withCompletion:(id /* block */)a2;
- (id)reportValue:(BOOL)a0 forFeatureSetting:(long long)a1 error:(id *)a2;
- (void)reportValue:(BOOL)a0 forFeatureSetting:(long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)a0;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(id /* block */)a0;
- (void)saliencyFromEmailHeaders:(id)a0 withCompletion:(id /* block */)a1;
- (id)saliencyFromRFC822Data:(id)a0 error:(id *)a1;
- (void)saliencyFromRFC822Data:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)sendRTCLogs:(id *)a0;
- (void)setManagerForTesting:(id)a0;
- (void)setQueuesRequestsIfBusy:(BOOL)a0;
- (void)sleepWithCompletion:(id /* block */)a0;
- (id)sortedSaliencyResultsRestrictedToMailboxTypes:(id)a0 mailboxIds:(id)a1 receivedOnOrAfter:(id)a2 ascending:(BOOL)a3 limit:(unsigned long long)a4 error:(id *)a5;
- (void)sortedSaliencyResultsRestrictedToMailboxTypes:(id)a0 mailboxIds:(id)a1 receivedOnOrAfter:(id)a2 ascending:(BOOL)a3 limit:(unsigned long long)a4 withCompletion:(id /* block */)a5;
- (id)sortedUnsubscriptionOpportunitiesForField:(long long)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (id)sortedUnsubscriptionOpportunitiesForField:(long long)a0 minCount:(unsigned long long)a1 minScore:(double)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)a0 minCount:(unsigned long long)a1 minScore:(double)a2 limit:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (BOOL)spotlightReimportFromIdentifier:(id)a0 forPersonHandle:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
- (void)spotlightReimportFromIdentifier:(id)a0 forPersonHandle:(id)a1 startDate:(id)a2 endDate:(id)a3 withCompletion:(id /* block */)a4;
- (void)suggestContactMatchesWithMessagingPrefix:(id)a0 limitTo:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)a0 error:(id *)a1;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)a0 options:(unsigned int)a1 error:(id *)a2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)a0 options:(unsigned int)a1 withCompletion:(id /* block */)a2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 limitTo:(unsigned long long)a2 error:(id *)a3;
- (id)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 limitTo:(unsigned long long)a2 options:(unsigned int)a3 error:(id *)a4;
- (void)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 limitTo:(unsigned long long)a2 options:(unsigned int)a3 withCompletion:(id /* block */)a4;
- (void)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 limitTo:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (id)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 prefix:(id)a2 limitTo:(unsigned long long)a3 error:(id *)a4;
- (id)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 prefix:(id)a2 limitTo:(unsigned long long)a3 options:(unsigned int)a4 error:(id *)a5;
- (void)suggestEventsStartingAt:(id)a0 endingAt:(id)a1 prefix:(id)a2 limitTo:(unsigned long long)a3 options:(unsigned int)a4 withCompletion:(id /* block */)a5;
- (id)suggestionsFromEmailContent:(id)a0 headers:(id)a1 source:(id)a2 options:(unsigned long long)a3 error:(id *)a4;
- (void)suggestionsFromEmailContent:(id)a0 headers:(id)a1 source:(id)a2 options:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (id)suggestionsFromRFC822Data:(id)a0 source:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)suggestionsFromRFC822Data:(id)a0 source:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (id)suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 processingType:(unsigned long long)a2 error:(id *)a3;
- (void)suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 processingType:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)suggestionsFromSearchableItem:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)suggestionsFromSimpleMailMessage:(id)a0 headers:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)suggestionsFromSimpleMailMessage:(id)a0 headers:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)suggestionsFromURL:(id)a0 title:(id)a1 HTMLPayload:(id)a2 withCompletion:(id /* block */)a3;
- (void)titleSuggestionForMessage:(id)a0 withCompletion:(id /* block */)a1;
- (id)topSalienciesForMailboxId:(id)a0 limit:(long long)a1 error:(id *)a2;
- (void)topSalienciesForMailboxId:(id)a0 limit:(long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)updateMessages:(id)a0 state:(unsigned long long)a1 error:(id *)a2;
- (void)updateMessages:(id)a0 state:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 containingSubstring:(id)a3 flagFilter:(unsigned char)a4 limit:(unsigned int)a5 error:(id *)a6;
- (void)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 containingSubstring:(id)a3 flagFilter:(unsigned char)a4 limit:(unsigned int)a5 withCompletion:(id /* block */)a6;
- (id)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 limit:(unsigned int)a3 error:(id *)a4;
- (void)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 limit:(unsigned int)a3 withCompletion:(id /* block */)a4;
- (void)waitForEventWithIdentifier:(id)a0 toAppearInEventStoreWithCompletion:(id /* block */)a1;
- (void)waitForEventWithIdentifier:(id)a0 toAppearInEventStoreWithLastModificationDate:(id)a1 completion:(id /* block */)a2;

@end
