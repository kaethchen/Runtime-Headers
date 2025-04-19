@protocol CNScheduler;

@interface ABSchedulers : NSObject

@property (class, readonly) id<CNScheduler> distributedNotificationPreprocessingScheduler;

@end
