@class NSObject;
@protocol OS_dispatch_queue;

@interface SMScreenLockMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) int screenLockNotificationToken;

- (void).cxx_destruct;

@end
