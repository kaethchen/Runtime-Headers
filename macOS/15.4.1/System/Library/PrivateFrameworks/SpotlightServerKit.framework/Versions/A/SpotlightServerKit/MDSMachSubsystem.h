@class NSObject;
@protocol OS_dispatch_queue;

@interface MDSMachSubsystem : NSObject {
    struct mach_msg_dispatch_link { struct mig_subsystem *x0; unsigned int x1; struct mach_msg_dispatch_link *x2; } *_dispatchChain;
    BOOL _shutDown;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __CFDictionary { } *_deadNameObjectRecordMap;
    struct __CFDictionary { } *_noSendersObjectRecordMap;
    struct __CFDictionary { } *_sourcesByPort;
    struct __CFDictionary { } *_channelsByPort;
}

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (id)initWithQueue:(id)a0;
- (void)shutdown;
- (void)unregisterPort:(unsigned int)a0;
- (void)machPortNotify:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *)a0 object:(id)a1;
- (BOOL)registerForDeadNameNotification:(unsigned int)a0 withBlock:(id /* block */)a1;
- (BOOL)registerForDeadNameNotification:(unsigned int)a0 withSelector:(SEL)a1 andObject:(id)a2;
- (BOOL)registerForNoSendersNotification:(unsigned int)a0 withSelector:(SEL)a1 andObject:(id)a2;
- (void)registerPort:(unsigned int)a0 rights:(unsigned long long)a1;
- (void)registerPort:(unsigned int)a0 withCallback:(void /* function */ *)a1 rights:(unsigned long long)a2;
- (void)unregisterForDeadNameNotification:(unsigned int)a0;
- (void)unregisterForNoSendersNotification:(unsigned int)a0;

@end
