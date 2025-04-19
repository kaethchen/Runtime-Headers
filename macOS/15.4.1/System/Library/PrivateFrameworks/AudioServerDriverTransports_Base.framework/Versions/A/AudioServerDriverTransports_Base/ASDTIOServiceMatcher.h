@class NSString, NSObject;
@protocol OS_dispatch_queue, ASDTIOServiceMatchDelegate;

@interface ASDTIOServiceMatcher : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _matchingNotification;
    unsigned int _willTerminateNotification;
}

@property (weak, nonatomic) id<ASDTIOServiceMatchDelegate> delegate;
@property (retain, nonatomic) NSString *ioServiceClassName;
@property (nonatomic) const char *ioServiceClassNameCStr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *matcherQueue;

+ (id)forIOServiceWithClassName:(id)a0 withDelegate:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)addMatchingNotificationForType:(char[128])a0 callback:(void /* function */ *)a1;
- (id)initForIOServiceWithClassName:(id)a0 withDelegate:(id)a1;

@end
