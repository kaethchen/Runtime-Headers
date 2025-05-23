@class NSString, NSExtensionContext;

@interface CNUIUserActionExtensionURLOpener : NSObject <CNUIUserActionURLOpener>

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)a0;
- (id)openURL:(id)a0 isSensitive:(BOOL)a1 connectionEndpoint:(id)a2 bundleIdentifier:(id)a3 withScheduler:(id)a4;
- (id)openURL:(id)a0 isSensitive:(BOOL)a1 withScheduler:(id)a2;
- (id)openURL:(id)a0 withScheduler:(id)a1;

@end
