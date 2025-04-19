@class FCReadingList, FCPersonalizationData, FCUserInfo, FCTagSettings, FCPrivateChannelMembershipController, FCPuzzleTypeSettings, FCReadingHistory, FCRecipeUserEventHistory, NSString, FCShortcutCategoryList, FCSubscriptionList, FCIssueReadingHistory, FCPuzzleHistory, FCUserEventHistory, FCAudioPlaylist, FCShortcutList;
@protocol FCContentContext, FCPrivateDataContextInternal, FCNetworkBehaviorMonitor, FCPushNotificationHandling;

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext>

@property (retain, nonatomic) id<FCPrivateDataContextInternal> internalPrivateDataContext;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCIssueReadingHistory *issueReadingHistory;
@property (readonly, nonatomic) FCPersonalizationData *personalizationData;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (readonly, nonatomic) FCReadingHistory *readingHistory;
@property (readonly, nonatomic) FCReadingList *readingList;
@property (readonly, nonatomic) FCPuzzleHistory *puzzleHistory;
@property (readonly, nonatomic) FCPuzzleTypeSettings *puzzleTypeSettings;
@property (readonly, nonatomic) FCShortcutList *shortcutList;
@property (readonly, nonatomic) FCShortcutCategoryList *shortcutCategoryList;
@property (readonly, nonatomic) FCAudioPlaylist *audioPlaylist;
@property (readonly, nonatomic) FCUserEventHistory *userEventHistory;
@property (readonly, nonatomic) FCRecipeUserEventHistory *recipeUserEventHistory;
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property (readonly, nonatomic) FCUserInfo *userInfo;
@property (readonly, nonatomic) FCTagSettings *tagSettings;
@property (readonly, nonatomic) id<FCNetworkBehaviorMonitor> networkBehaviorMonitor;
@property (readonly, nonatomic) id<FCPushNotificationHandling> privatePushNotificationHandler;
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property (readonly, copy, nonatomic) NSString *privateDataDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_privateDataControllers;
- (id)initWithConfiguration:(id)a0 context:(id)a1 privateDataHostDirectory:(id)a2 privateDataActionProvider:(id)a3 encryptionDelegate:(id)a4 networkBehaviorMonitor:(id)a5 privateDataSyncingEnabled:(BOOL)a6;
- (id)initWithConfiguration:(id)a0 context:(id)a1 privateDatabase:(id)a2 privateDataDirectory:(id)a3 privateDataActionProvider:(id)a4 encryptionDelegate:(id)a5 networkBehaviorMonitor:(id)a6 privateDataSyncingEnabled:(BOOL)a7;
- (void)preparePrivateDataControllersForUse;
- (id)privateStoreWithName:(id)a0 version:(unsigned long long)a1 options:(unsigned long long)a2;

@end
