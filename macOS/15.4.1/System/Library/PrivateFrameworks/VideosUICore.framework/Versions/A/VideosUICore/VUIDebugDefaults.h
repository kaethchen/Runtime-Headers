@interface VUIDebugDefaults : NSObject

@property (nonatomic) BOOL debugUIEnabled;
@property (nonatomic) BOOL pagePerformanceEnabled;
@property (nonatomic) BOOL metricsLoggingEnabled;
@property (nonatomic) BOOL metricsExpandedLoggingEnabled;
@property (nonatomic) BOOL metricsLogLocationAndImpressions;
@property (nonatomic) BOOL metricsPageRenderLoggingEnabled;
@property (nonatomic) BOOL enableDemoMode;
@property (nonatomic) BOOL gdprFirstTimeFlowEnabled;
@property (nonatomic) BOOL gdprWhatsNewFlowEnabled;
@property (nonatomic) BOOL debugRefreshEventLogEnabled;
@property (nonatomic) BOOL playbackOverridesEnabled;
@property (nonatomic) BOOL hoverEffectDisabled;
@property (nonatomic) BOOL impressionTrackingDisabled;
@property (nonatomic) BOOL stackedTextUseTypeAsViewIdEnabled;
@property (nonatomic) BOOL iTunesExtrasSwiftUIMock;
@property (nonatomic) BOOL capellaDebuggerEnabled;
@property (nonatomic) BOOL capellaMockedDataEnabled;
@property (nonatomic) BOOL capellaMusicInfoEnabled;
@property (nonatomic) BOOL performanceDebuggerEnabled;
@property (nonatomic) BOOL performanceDebuggerVerboseEnabled;
@property (nonatomic) BOOL useExperienceControllerForAllContent;

+ (id)sharedInstance;

- (id)init;

@end
