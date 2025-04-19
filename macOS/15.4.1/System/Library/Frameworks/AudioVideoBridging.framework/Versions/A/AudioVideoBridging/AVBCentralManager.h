@class IOKNotificationPort, NSString, NSMutableDictionary, IOKMatchingNotification, NSObject;
@protocol OS_dispatch_queue;

@interface AVBCentralManager : NSObject <AVBInterfaceDelegate> {
    NSMutableDictionary *_interfaces;
    NSObject<OS_dispatch_queue> *_interfaceQueue;
    IOKNotificationPort *_notificationPort;
    IOKMatchingNotification *_interfaceMatched;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)nextAvailableDynamicEntityID;
+ (unsigned long long)nextAvailableDynamicEntityModelID;
+ (void)releaseDynamicEntityID:(unsigned long long)a0;
+ (void)releaseDynamicEntityModelID:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)interfaceWithName:(id)a0;
- (id)_interfaceWithName:(id)a0;
- (void)didAddInterface:(id)a0;
- (void)didMatchNetworkInterface:(id)a0;
- (void)didRemoveInterface:(id)a0;
- (void)didTerminateControllerForInterface:(id)a0;
- (void)didTerminateInterface:(id)a0;
- (void)startControllerMatching;
- (void)startInterfaceMatching;
- (BOOL)streamingEnabledInterfacesOnly;

@end
