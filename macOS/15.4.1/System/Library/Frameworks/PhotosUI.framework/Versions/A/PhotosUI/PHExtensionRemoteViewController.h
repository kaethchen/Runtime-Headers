@class NSString, NSUUID, PHExtensionHostViewPreferredSizes, NSExtensionContext, NSExtension;
@protocol PHExtensionRemoteViewControllerDelegate;

@interface PHExtensionRemoteViewController : NSRemoteViewController <PHExtensionRemoteViewControllerProtocol>

@property (class, readonly, nonatomic) NSString *serviceViewControllerClassName;
@property (class, readonly, nonatomic) Class catalystSpecificRemoteViewControllerClass;

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) PHExtensionHostViewPreferredSizes *preferredSizes;
@property (weak, nonatomic) id<PHExtensionRemoteViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSExtensionContext *hostContext;
@property (readonly, nonatomic) id vendorProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestViewControllerFromExtension:(id)a0 inputItems:(id)a1 sizeHint:(struct CGSize { double x0; double x1; })a2 connectionHandler:(id /* block */)a3;
+ (void)requestViewControllerFromExtension:(id)a0 sizeHint:(struct CGSize { double x0; double x1; })a1 connectionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)disconnect;
- (id)exportedObject;
- (struct CGSize { double x0; double x1; })preferredMaximumSize;
- (struct CGSize { double x0; double x1; })preferredMinimumSize;
- (void)updateViewConstraints;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)connectToExtension:(id)a0 withSessionID:(id)a1 sizeHint:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)updatePreferredSizes:(id)a0;
- (id)vendorProxyWithErrorHandler:(id /* block */)a0;

@end
