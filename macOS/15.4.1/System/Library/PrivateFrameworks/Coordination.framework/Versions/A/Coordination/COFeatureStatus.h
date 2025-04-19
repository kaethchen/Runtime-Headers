@interface COFeatureStatus : NSObject

+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isCOClusterEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isSlimBallotsEnabled;

@end
