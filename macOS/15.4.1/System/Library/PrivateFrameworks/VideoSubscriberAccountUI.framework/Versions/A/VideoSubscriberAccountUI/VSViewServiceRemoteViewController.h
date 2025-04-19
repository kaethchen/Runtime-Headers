@class NSString;
@protocol VSViewServiceRemoteViewControllerDelegate;

@interface VSViewServiceRemoteViewController : NSObject <VSViewServiceHostProtocol>

@property (weak, nonatomic) id<VSViewServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)dealloc;
- (void).cxx_destruct;
- (id)serviceViewControllerProxy;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_dismissViewController;
- (void)_request:(id)a0 didFinishWithResponse:(id)a1;
- (void)_didCancelRequest:(id)a0;
- (void)_didChooseAdditionalProvidersForRequest:(id)a0;
- (void)_didChooseProviderWithIdentifier:(id)a0 vetoHandler:(id /* block */)a1;
- (void)_presentViewController;
- (void)_request:(id)a0 didFailWithError:(id)a1;

@end
