@class NSString;

@interface STPINRemoteViewController : NSRemoteViewController <STPINRemoteViewController>

@property (copy, nonatomic) id /* block */ pinServiceDidComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestPINViewControllerWithUserURI:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2 pinServiceCompletionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)pinServiceDidCompleteWithError:(id)a0 reply:(id /* block */)a1;

@end
