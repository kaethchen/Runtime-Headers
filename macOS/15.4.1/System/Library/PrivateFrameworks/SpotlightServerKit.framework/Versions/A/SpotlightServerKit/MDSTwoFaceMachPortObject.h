@class MDSMachSubsystem, NSObject;
@protocol OS_dispatch_queue;

@interface MDSTwoFaceMachPortObject : MDSMachPortObject {
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    unsigned int _backgroundPort;
    MDSMachSubsystem *_backgroundSubsystem;
}

- (void)dealloc;
- (void)shutdown;
- (void)addBackgroundMachDispatchLinks;
- (unsigned int)backgroundPort;
- (unsigned long long)backgroundPortRights;
- (id)initWithDeferredShutdown:(BOOL)a0;
- (void)setBackgroundPort:(unsigned int)a0;
- (void)setupBackgroundMachSubsystem;

@end
