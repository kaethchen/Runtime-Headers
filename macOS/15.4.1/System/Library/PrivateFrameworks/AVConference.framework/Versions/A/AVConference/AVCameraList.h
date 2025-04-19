@class NSObject;
@protocol AVCameraListDelegate;

@interface AVCameraList : NSObject

@property NSObject<AVCameraListDelegate> *delegate;

+ (void)initialize;
+ (id)avCameraList;

- (void)dealloc;
- (void)registerListeners;
- (void)unregisterListeners;
- (id)cameraList;
- (void)refreshListeners;

@end
