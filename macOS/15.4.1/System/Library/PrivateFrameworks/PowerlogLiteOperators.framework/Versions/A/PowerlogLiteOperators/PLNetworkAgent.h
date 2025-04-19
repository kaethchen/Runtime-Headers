@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitionWake;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)initKernelEvent;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)logEventPointWake;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;

@end
