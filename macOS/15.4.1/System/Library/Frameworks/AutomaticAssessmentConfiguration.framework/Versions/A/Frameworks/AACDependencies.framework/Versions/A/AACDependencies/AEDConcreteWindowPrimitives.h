@class NSApplication, NSArray, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface AEDConcreteWindowPrimitives : NSObject <AEDWindowPrimitives> {
    unsigned int _connectionID;
    NSApplication *_application;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSArray *currentWindows;

- (void).cxx_destruct;
- (id)observeWindowLifecycleChangesWithHandler:(id /* block */)a0;
- (id)windowForWindowNumber:(long long)a0;
- (id)initWithApplication:(id)a0 connectionID:(unsigned int)a1 notificationCenter:(id)a2 queue:(id)a3;

@end
