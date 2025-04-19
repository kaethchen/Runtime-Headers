@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject

@property (retain, nonatomic) IDSServiceMonitor *monitor;
@property (readonly, nonatomic) NSMutableSet *listeners;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (BOOL)addListenerID:(id)a0;
- (BOOL)hasListenerID:(id)a0;
- (BOOL)removeListenerID:(id)a0;

@end
