@class NSString;

@interface LACUserInterfaceNullAdapter : NSObject <LACUserInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminateWithReason:(id)a0;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
