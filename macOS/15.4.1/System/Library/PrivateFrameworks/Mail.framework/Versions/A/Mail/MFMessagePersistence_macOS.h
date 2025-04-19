@class NSString, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MFMessagePersistence_macOS : EDMessagePersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFScheduler> contentLoadScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)baseMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (id)collectStatistics;
- (id)createContextForIteration;
- (id)flagsForLegacyFlags:(long long)a0 numberOfAttachments:(long long *)a1;
- (id)fullDataIfAvailableForMessage:(id)a0;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 hookRegistry:(id)a2 userProfileProvider:(id)a3 blockedSenderManager:(id)a4 vipReader:(id)a5 gmailLabelPersistence:(id)a6;
- (id)mailboxesQueryExpressionForMailboxDatabaseIDs:(id)a0 forExclusion:(BOOL)a1;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; })messageColorFromStringRepresentation:(id)a0;
- (void)notifyGeneratedSummaryChangeForMessage:(id)a0 window:(id)a1;
- (BOOL)persistMessageAuthenticationState:(long long)a0 forMessage:(id)a1;
- (id)persistedMessageForSQLRow:(id)a0 connection:(id)a1 iterationContext:(id)a2;
- (long long)priorityFromLegacyFlags:(long long)a0 actedOnByExtension:(BOOL *)a1 colorIsHighlight:(BOOL *)a2;
- (id)queryWithExpandedMailboxesFromQuery:(id)a0;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (void)test_tearDown;
- (id)_messageCriterionFromPredicate:(id)a0;
- (id)_criterionForMailbox:(id)a0;
- (id)_flagKeyForKeyPath:(id)a0;
- (BOOL)_isCriterionTypeFlagKeyPath:(id)a0;
- (id)_libraryMessageForMessageObjectID:(id)a0;
- (unsigned int)_loadOptions;
- (id)_messageCriterionForComparisonPredicate:(id)a0;
- (id)_messageCriterionForCompoundPredicate:(id)a0;
- (id)_negateSimpleCriterion:(id)a0;
- (id)_negatedCriterionForCriterion:(id)a0;
- (id)criterionForQuery:(id)a0;
- (unsigned int)defaultLibraryOptions;

@end
