@class NSObject, CoreRCInterfaceListener;
@protocol OS_dispatch_queue;

@interface CoreRCInterface : NSObject

@property (copy, nonatomic) id testProperty;
@property (nonatomic) CoreRCInterfaceListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void)dealloc;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)dispatchAsyncHighPriority:(id /* block */)a0;
- (BOOL)doesNotImplement:(SEL)a0 error:(id *)a1;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end
