@class NSMutableArray, NSArray, _GCHapticDynamicParameter, _GCHapticClientProxy, NSNumber, _GCHapticLogicalDevice;

@interface _GCHapticPlayer : NSObject {
    NSMutableArray *_scheduledCommands;
    NSMutableArray *_activeHapticEvents;
    NSMutableArray *_eventsToRemove;
    _GCHapticDynamicParameter *_intensityParameter;
    _GCHapticDynamicParameter *_sharpnessParameter;
    _GCHapticClientProxy *_client;
    BOOL _dirtyMuteState;
    BOOL _muted;
    int _muteReasons[5];
    BOOL _transientsEnqueuedSinceLastQuery;
    BOOL _activeEventThisSlice;
    double _initializationTime;
    double _activeLifetime;
    double _lastActiveTime;
    NSMutableArray *_intensityParamCurve;
    NSMutableArray *_sharpnessParamCurve;
}

@property (nonatomic) int totalEventsProcessed;
@property (nonatomic) int transientEventsProcessed;
@property (nonatomic) int continuousEventsProcessed;
@property (nonatomic) int parameterCurvesProcessed;
@property (nonatomic) double totalLifetimeInSeconds;
@property (readonly, copy, nonatomic) NSArray *actuators;
@property (weak, nonatomic) _GCHapticLogicalDevice *hapticLogicalDevice;
@property (readonly, copy, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) float continuousIntensity;
@property (readonly, nonatomic) float continuousSharpness;
@property (nonatomic, getter=isRetainedByClient) BOOL retainedByClient;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)isMuted;
- (void)teardown;
- (void)clearParameters;
- (BOOL)isActiveAtTime:(double)a0;
- (double)activeLifetimeInSeconds;
- (id)controllerProductCategory;
- (void)handleCommand:(id)a0;
- (float)hapticStrength;
- (BOOL)hasProcessedActiveEventsAfterTime:(double)a0;
- (BOOL)hasProcessedActiveEventsThisSlice;
- (BOOL)hasScheduledCommands;
- (BOOL)hasScheduledEventsByTime:(double)a0;
- (id)initWithIdentifier:(unsigned long long)a0 actuators:(id)a1 client:(id)a2;
- (BOOL)isMutedForReason:(unsigned long long)a0;
- (void)processSliceForLogicalDevice:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (void)scheduleCommand:(const void *)a0;
- (void)setMute:(BOOL)a0 forReason:(unsigned long long)a1;
- (BOOL)transientsEnqueuedSinceLastQuery;

@end
