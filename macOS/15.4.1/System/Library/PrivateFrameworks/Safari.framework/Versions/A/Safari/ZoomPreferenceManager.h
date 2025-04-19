@class WBSPerSitePreference, NSString, NSMutableDictionary, WBSSafariBookmarksSyncAgentProxy, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol WBSPerSitePreferenceManagerDelegate, OS_dispatch_queue;

@interface ZoomPreferenceManager : NSObject <WBSPerSitePreferenceManager> {
    NSMutableDictionary *_mapOfHostnamesToZoomPreferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCoalescedAsynchronousWriter *_zoomPreferencesWriter;
    long long _zoomPreferencesLoadingStatus;
    NSURL *_preferencesFileURL;
    NSMutableDictionary *_mapOfCKRecordNamesToCKRecords;
}

@property (readonly, nonatomic) WBSPerSitePreference *pageZoomPreference;
@property (readonly, nonatomic) double defaultPageZoomFactor;
@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;
@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldDeleteUnrecognizedPreference;
@property (readonly, nonatomic) BOOL hasDynamicPreferenceValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageZoomFactors;
+ (id)largerZoomFactorForFactor:(id)a0;
+ (id)smallerZoomFactorForFactor:(id)a0;
+ (id)zoomFactorForUntrustedZoomFactor:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (id)_dictionaryRepresentation;
- (void)_historyWasCleared:(id)a0;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)performDelayedLaunchOperations;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)savePendingChangesBeforeTermination;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (id)valuesForPreference:(id)a0;
- (void)_didRemoveHostnames:(id)a0;
- (id)_mapOfCKRecordNamesToCKRecordsFromFileURL:(id)a0;
- (id)_mapOfHostnamesToZoomPreferencesFromFileURL:(id)a0;
- (void)_pageZoomUpdatedRemotely:(id)a0;
- (void)_performDelayedLaunchOperationsIfNecessary;
- (void)_performDelayedLaunchOperationsWithPreferenceFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setZoomPreference:(id)a0 forURL:(id)a1 defaultPageZoomFactor:(double)a2 completionHandler:(id /* block */)a3;
- (void)_zoomPreferenceStateDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)allZoomPreferences;
- (void)clearAllPageZoomSyncData;
- (BOOL)copyZoomPreferenceForURL:(id)a0 intoWebAppWithBundleIdentifier:(id)a1;
- (void)setDefaultPageZoomFactor:(double)a0;
- (void)setPageZoomSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (void)setZoomPreference:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)syncDataForRecordName:(id)a0;
- (id)zoomPreferenceForURL:(id)a0;

@end
