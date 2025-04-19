@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    NSMutableSet *_timeCoercibleSilos;
    int _missBehavior;
    double _currentGlobalLatchedAbsoluteTimestamp;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)rereadConfiguration:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)intendToSyncServiceWithName:(id)a0;
- (void)amendServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)enableTimeCoercion;
- (BOOL)ensureServiceIsRunning:(id)a0;
- (id)getServiceWithName:(id)a0;
- (BOOL)isServiceEnabled:(id)a0;
- (BOOL)isServiceRunning:(id)a0;
- (BOOL)isTimeCoercionEnabled;
- (int)missBehavior;
- (id)proxyForService:(id)a0;
- (id)proxyForService:(id)a0 forClient:(id)a1;
- (void)retireServiceWithName:(id)a0;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)a0;
- (id)setRecordingTriggerMap:(id)a0 outputPathBase:(id)a1;
- (void)setServiceReplacementMap:(id)a0 missBehavior:(int)a1;

@end
