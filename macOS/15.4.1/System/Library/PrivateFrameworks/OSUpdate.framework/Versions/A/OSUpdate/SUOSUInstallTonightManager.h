@class SUMacControllerDescriptor;

@interface SUOSUInstallTonightManager : NSObject

@property (retain) SUMacControllerDescriptor *queuedDescriptor;

- (void).cxx_destruct;
- (void)queueDescriptorForInstallTonight:(id)a0 withReason:(unsigned long long)a1 stashState:(long long)a2;
- (void)removeQueuedDescriptor;

@end
