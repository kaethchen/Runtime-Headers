@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSManualDuckingHandler : NSObject <CSDefaultAudioRouteChangeMonitorMacDelegate>

@property (nonatomic) unsigned int lastDuckedAudioDeviceID;
@property (nonatomic) float lastDuckedLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)defaultAudioRouteChangeMonitorMac:(id)a0 didReceivedInputAudioRouteChangeEvent:(BOOL)a1;
- (void)defaultAudioRouteChangeMonitorMac:(id)a0 didReceivedOutputAudioRouteChangeEvent:(BOOL)a1;
- (void)duckAudioDeviceWithDeviceID:(unsigned int)a0 duckedLevel:(float)a1 rampDuration:(float)a2;
- (void)duckDefaultOutputAudioDeviceWithDuckedLevel:(float)a0 rampDuration:(float)a1;
- (void)resetDucking;

@end
