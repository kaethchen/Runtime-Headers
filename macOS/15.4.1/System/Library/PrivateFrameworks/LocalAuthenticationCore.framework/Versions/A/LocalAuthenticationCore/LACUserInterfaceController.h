@class NSString, NSMapTable;

@interface LACUserInterfaceController : NSObject <LACUserInterfaceController> {
    NSMapTable *_activeUserInterfaces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)userInterface;
- (void)terminateAllUserInterfacesWithReason:(id)a0;
- (void)terminateUserInterfaceWithUUID:(id)a0 reason:(id)a1;
- (id)userInterfaceWithUUID:(id)a0;

@end
