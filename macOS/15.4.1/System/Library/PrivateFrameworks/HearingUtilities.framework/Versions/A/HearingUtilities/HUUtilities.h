@class HURoutesManager, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deviceIsTinker;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (id)currentPickableAudioRoutesIfExist;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (BOOL)headphoneStreamSelected;
- (BOOL)headphoneStreamSelectedForAddresses:(id)a0;
- (BOOL)hearingAidRouteAvailable;
- (void)hearingAidRouteAvailableAsync:(id /* block */)a0;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)a0;
- (BOOL)hearingAidStreamSelected;
- (void)hearingAidStreamSelectedAsync:(id /* block */)a0;
- (BOOL)hearingAidStreamSelectedForAvailableRoutes:(id)a0;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)a0;
- (void)updateHearingFeatureUsage;
- (void)updateWirelessSplitterState;
- (BOOL)wirelessSplitterEnabled;

@end
