@class NSString, AKPrivateEmailRVSWindowController, NSWindow;

@interface AKPrivateEmailUIProviderImp : NSObject <AKPrivateEmailRVSWindowControllerDelegate, AKPrivateEmailUIProvider>

@property (retain, nonatomic) AKPrivateEmailRVSWindowController *privateEmailWindowController;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
