@class NSString, NSURL, REMDAChangeTrackingHelper, NSSet, NSMutableDictionary, AKAppleIDSession, NSDictionary, NSMutableSet, MobileCalDAVAccount, CalDAVRefreshContext, NSNumber, NSDateComponents;
@protocol CoreDAVTaskManager, CalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal> {
    REMDAChangeTrackingHelper *_rem_changeTracking;
}

@property (retain, nonatomic) NSString *uid;
@property (weak, nonatomic) id<CalDAVAccount> account;
@property (readonly, nonatomic) MobileCalDAVAccount *daAccount;
@property (retain, nonatomic) NSMutableDictionary *calendarUserAddressesPerCalendar;
@property (retain, nonatomic) NSURL *preferredCalendarUserAddress;
@property (retain, nonatomic) NSString *preferredCalendarEmailAddress;
@property (retain, nonatomic) NSString *preferredCalendarPhoneNumber;
@property (retain, nonatomic) NSMutableSet *deletedCalendarURLs;
@property (retain, nonatomic) NSMutableSet *addedCalendars;
@property (retain, nonatomic) NSMutableSet *modifiedCalendars;
@property (retain, nonatomic) CalDAVRefreshContext *refreshContext;
@property (retain, nonatomic) NSURL *legacy_principalURL;
@property (retain, nonatomic) AKAppleIDSession *appleIDSession;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSURL *calendarHomeURL;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (readonly, nonatomic) NSDictionary *subCalPropertiesByURL;
@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSURL *defaultCalendarURL;
@property (retain, nonatomic) NSURL *notificationCollectionURL;
@property (retain, nonatomic) NSString *notificationCollectionCTag;
@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) NSString *inboxCTag;
@property (retain, nonatomic) NSURL *outboxURL;
@property (retain, nonatomic) NSURL *dropBoxURL;
@property (retain, nonatomic) NSString *notificationURLString;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSString *calendarHomePushKey;
@property (retain, nonatomic) NSNumber *quotaFreeBytes;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (nonatomic) BOOL isDelegate;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL canCreateCalendars;
@property (nonatomic) BOOL isExpandPropertyReportSupported;
@property (nonatomic) BOOL supportsCalendarUserSearch;
@property (nonatomic) BOOL supportsFreebusy;
@property (nonatomic) BOOL supportsSyncToken;
@property (readonly, nonatomic) BOOL supportsExtendedCalendarQuery;
@property (readonly, nonatomic) NSSet *calendars;
@property (readonly, nonatomic) NSString *APSTopic;
@property (readonly, nonatomic) NSURL *APSSubscriptionURL;
@property (readonly, nonatomic) NSString *APSEnv;
@property (nonatomic) BOOL supportsPush;
@property (nonatomic) BOOL shouldRefreshPrincipalSearchProperties;
@property (nonatomic) BOOL shouldUpdatePushDelegate;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL calendarsAreDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CoreDAVTaskManager> taskManager;
@property (readonly, nonatomic) BOOL isMergeSync;
@property (readonly, nonatomic) BOOL isEnabledForEvents;
@property (readonly, nonatomic) BOOL isEnabledForTodos;
@property (readonly, nonatomic) NSDateComponents *eventFilterStartDate;
@property (readonly, nonatomic) NSDateComponents *eventFilterEndDate;
@property (retain, nonatomic) NSString *defaultTimedAlarms;
@property (retain, nonatomic) NSString *defaultAllDayAlarms;
@property (nonatomic) BOOL alarmsDirty;
@property (nonatomic) BOOL needsDefaultTimedAlarmUpdate;
@property (nonatomic) BOOL needsDefaultAllDayAlarmUpdate;

+ (BOOL)compareAddressURL:(id)a0 localString:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)host;
- (id)password;
- (long long)port;
- (id)scheme;
- (id)user;
- (id)configuration;
- (id)clientToken;
- (id)accountID;
- (id)userAgentHeader;
- (void)removeCalendar:(id)a0;
- (id)additionalHeaderValues;
- (id)calendarOfType:(int)a0 atURL:(id)a1 withOptions:(id)a2;
- (id)defaultEventCalendarTitle;
- (id)defaultTodoCalendarTitle;
- (void)prepareCalendarsForSyncWithCompletionBlock:(id /* block */)a0;
- (void)removecalendarWithURL:(id)a0;
- (id)identityPersist;
- (id)_eventSyncEndDate;
- (id)_startDateFromDaysToSync:(int)a0;
- (BOOL)_userAddressSet:(id)a0 isEqualToSet:(id)a1;
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)a0;
- (id)calendarUserAddresses;
- (BOOL)clearCalendarChanges;
- (void)clear_rem_changeTracking;
- (void)clientTokenRequestedByServer;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (id)customConnectionProperties;
- (id)getAppleIDSession;
- (BOOL)handleCertificateError:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasCalendarUserAddress:(id)a0;
- (id)initWithConfiguration:(id)a0 principalUID:(id)a1 account:(id)a2;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteHomeSetOnDifferentHost:(id)a0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)a0 numUploadedElements:(long long)a1;
- (void)noteTimeSpentInNetworking:(double)a0;
- (id)oauth2Token;
- (id)oauthInfoProvider;
- (unsigned long long)oauthVariant;
- (id)preferredCalendarUserAddressesForCalendar:(id)a0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (id)rem_changeTracking;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (void)setPreferredCalendarUserAddresses:(id)a0 forCalendar:(id)a1;
- (BOOL)shouldCompressRequests;
- (BOOL)shouldFailAllTasks;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)a0;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)useSSL;
- (void)webLoginRequestedAtURL:(id)a0 reasonString:(id)a1 inQueue:(id)a2 completionBlock:(id /* block */)a3;

@end
