@class AVOutputDeviceDiscoverySession, NSObject;
@protocol OS_dispatch_queue;

@interface AVRouteDetectorInternal : NSObject {
    BOOL routeDetectionEnabled;
    BOOL multipleRoutesDetected;
    BOOL detectsCustomRoutes;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
    id outputDevicesChangeNotificationToken;
    id didEnterBackgroundNotificationToken;
    id didEnterForegroundNotificationToken;
    BOOL customRoutesPresent;
    BOOL routeDetectionSuspended;
}

@end
