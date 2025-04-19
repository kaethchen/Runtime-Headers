@class MDSMachSubsystem;

@interface MDSMachPortObject : MDSObject {
    MDSMachSubsystem *_machSubsystem;
}

+ (int)dispatchMachMsgOptions;
+ (unsigned int)maxMachMsgSize;
+ (void)setDispatchMachMsgOptions:(int)a0;
+ (void)setMaxMachMsgSize:(unsigned int)a0;

- (void)dealloc;
- (id)connection;
- (unsigned int)machPort;
- (void)addMachDispatchLinks;
- (void)invalidateRunLoopSources;
- (unsigned long long)portRights;
- (void)setMachPort:(unsigned int)a0;
- (void)setupMachSubsystem;

@end
