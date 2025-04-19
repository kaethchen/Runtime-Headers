@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)CFNetworkLogging;
+ (BOOL)compressRequests;
+ (BOOL)isAppleInternalInstall;
+ (id)APSEnv;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)calDAVRemindersForAll;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (double)defaultDAVProbeTimeout;
+ (BOOL)orphanCheckEnabled;
+ (void)_startListeningForNotifications;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)cookiesEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (BOOL)earlyPingEnabled;
+ (BOOL)enablePromptForServerTrust;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (BOOL)ignoreBadLDAPCerts;
+ (BOOL)ignoreSupportedCommands;
+ (BOOL)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (BOOL)perfLogging;
+ (int)refreshThrottleTime;
+ (void)removeDAManagedDefaults:(id)a0;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)useContactsFramerwork;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (BOOL)enableAutomaticAttachmentDownloads;
+ (BOOL)useContactsFramework;
+ (id)whitelistedEASProtocols;

@end
