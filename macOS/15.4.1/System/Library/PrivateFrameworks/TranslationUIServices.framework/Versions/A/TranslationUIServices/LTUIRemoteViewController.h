@class NSString, LTUIExtensionHostContext;
@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIRemoteViewController : NSRemoteViewController <LTUIViewServiceExtensionHostProtocol>

@property (weak, nonatomic) id<LTUIViewServiceExtensionHostProtocol> delegate;
@property (retain, nonatomic) LTUIExtensionHostContext *serviceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)dismiss;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)remoteIsReady;

@end
