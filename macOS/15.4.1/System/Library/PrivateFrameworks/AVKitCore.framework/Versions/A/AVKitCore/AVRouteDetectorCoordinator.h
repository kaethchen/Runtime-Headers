@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly, nonatomic) BOOL multipleRoutesDetected;

+ (BOOL)multipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(BOOL)a0;
+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;

- (void)dealloc;

@end
