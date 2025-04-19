@class _PASSimpleCoalescingTimer, NSString, UNUserNotificationCenter, ATXUniversalBlendingLayerServer, ATXWatchSmartStacksSender, ATXAppDirectoryOrderingProvider, ATXAppSwitcherSuggestionSender, ATXSpotlightActionsSuggestionSender, _ATXInternalUninstallNotification, NSObject, ATXLockscreenSuggestionSender, ATXClientModelSuggestionRouter;
@protocol ATXClientModelCacheManagerProtocol, OS_dispatch_queue;

@interface ATXClientModelSuggestionReceiver : NSObject <UNUserNotificationCenterDelegate, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol> {
    ATXClientModelSuggestionRouter *_router;
    ATXAppDirectoryOrderingProvider *_appDirectoryOrderingProvider;
    ATXAppSwitcherSuggestionSender *_appSwitcherSuggestionSender;
    ATXLockscreenSuggestionSender *_lockscreenSuggestionSender;
    ATXWatchSmartStacksSender *_watchSmartStacksSender;
    ATXSpotlightActionsSuggestionSender *_spotlightActionsSuggestionSender;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    id<ATXClientModelCacheManagerProtocol> _clientModelCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _homeScreenStackChangeDarwinNotificationObserver;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_updateCacheForClientModel:(id)a0 withSuggestions:(id)a1 cacheManager:(id)a2;
+ (void)clearPreviouslyPersistedCachesForCardSuggestionClientsIfNecessary;
+ (id)layoutSelectorsForConsumerSubTypes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_sendStackChangeDebugNotification:(id)a0;
- (void)blendingLayerRerankedSuggestions:(id)a0 consumerSubType:(unsigned char)a1;
- (void)blendingLayerUpdatedUICache:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initWithBlendingLayerServer:(id)a0;
- (BOOL)rerouteSuggestions:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)willCreateCacheUpdateWithFeedbackMetadataLength:(long long)a0 forClientModelId:(id)a1;

@end
