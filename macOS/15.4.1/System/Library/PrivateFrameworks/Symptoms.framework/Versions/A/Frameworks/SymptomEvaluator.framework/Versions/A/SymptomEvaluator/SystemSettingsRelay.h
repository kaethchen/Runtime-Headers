@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _packetFilterStateLock;
    double _packetFilterStateLastUpdated;
    NSString *_packetFilterState;
}

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;
@property (nonatomic) BOOL autoFeedbackAssistantInitialized;
@property (nonatomic) BOOL geoIPTrackingFeatureFlagEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *packetFilterState;
@property (readonly, nonatomic) NSString *symptomEvaluatorDatabaseContainerPath;
@property (readonly) BOOL autoBugCaptureEnabled;
@property (readonly) BOOL autoFeedbackAssistantEnable;
@property (readonly) BOOL autoBugCaptureAvailable;
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getAutoBugCaptureConfiguration;
- (void)_setAutoBugCaptureAvailable:(BOOL)a0;
- (void)_setAutoBugCaptureEnabled:(BOOL)a0;
- (void)_setAutoFeedbackAssistantEnable:(BOOL)a0;
- (id)getPacketFilterStateFromKernel;
- (void)registerForAutoBugCaptureChangeNotifications;

@end
