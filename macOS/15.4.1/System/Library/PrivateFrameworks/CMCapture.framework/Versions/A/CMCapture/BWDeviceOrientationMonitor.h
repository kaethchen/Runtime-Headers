@class NSObject;
@protocol OS_dispatch_queue, BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate;

@interface BWDeviceOrientationMonitor : NSObject {
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> *_orientationNotificationDispatchQueue;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
}

@property (readonly, nonatomic) int mostRecentPortraitLandscapeOrientation;
@property (readonly, nonatomic) int currentOrientation;
@property (nonatomic) id<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)start;
- (BOOL)stop;

@end
