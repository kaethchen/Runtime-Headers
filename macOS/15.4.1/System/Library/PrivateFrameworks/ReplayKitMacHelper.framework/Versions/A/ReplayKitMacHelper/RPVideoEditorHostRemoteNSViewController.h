@class NSArray, RPVideoEditorViewServiceExtensionHostContext, NSString, NSExtension;
@protocol RPVideoEditorHostRemoteNSViewControllerDelegate;

@interface RPVideoEditorHostRemoteNSViewController : NSRemoteViewController <RPVideoEditorViewServiceHostProtocol>

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSArray *inputItems;
@property (weak, nonatomic) id<RPVideoEditorHostRemoteNSViewControllerDelegate> delegate;
@property (retain, nonatomic) RPVideoEditorViewServiceExtensionHostContext *hostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)instantiateViewControllerWithExtension:(id)a0 inputItems:(id)a1 connectionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)loadView;
- (id)serviceViewControllerInterface;
- (void)viewDidLoad;
- (oneway void)onCancelButtonClickMessage;

@end
