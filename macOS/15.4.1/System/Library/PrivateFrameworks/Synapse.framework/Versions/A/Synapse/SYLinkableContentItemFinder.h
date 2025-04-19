@class NSArray, SYRunningApplicationsObserver, NSObject;
@protocol OS_dispatch_queue, SYLinkableContentItemFinderDelegate;

@interface SYLinkableContentItemFinder : NSObject

@property (copy, nonatomic) NSArray *_foregroundAppBundleIDs;
@property (nonatomic) long long _foregroundAppLoadRetriesRemaining;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_itemFinderQueue;
@property (retain, nonatomic) SYRunningApplicationsObserver *_runningApplicationsObserver;
@property (weak) id<SYLinkableContentItemFinderDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchLinkableContentItemsExcludingActivities:(id)a0 completion:(id /* block */)a1;
- (void)_activityFetchingFinishedWithActivities:(id)a0 appBundleIDs:(id)a1 foregroundBundleIDs:(id)a2 completion:(id /* block */)a3;
- (id)_currentForegroundAppBundleIDs;
- (void)_fetchActiveLinkableUserActivitiesExcluding:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldIncludeAsLinkableUserActivity:(id)a0 bundleID:(id)a1 foregroundBundleIDs:(id)a2 excludedActivities:(id)a3;
- (void)_updateForegroundApplications:(id)a0;
- (void)handleRemoteCurrentActivityDidChange;

@end
