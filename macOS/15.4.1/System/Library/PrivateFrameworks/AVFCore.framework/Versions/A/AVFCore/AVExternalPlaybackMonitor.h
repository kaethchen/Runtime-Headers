@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal *_ivars;
}

@property (readonly, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) BOOL airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (void)dealloc;
- (id)description;

@end
