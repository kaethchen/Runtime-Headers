@class NSString;
@protocol SORemoteExtensionViewControllerDelegate;

@interface SORemoteExtensionViewController : NSRemoteViewController <SOHostExtensionViewProtocol>

@property (weak, nonatomic) id<SORemoteExtensionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
