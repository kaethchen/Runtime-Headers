@class NSBundle, IAProvider, IAAccount, NSString;

@interface IAPlugin : NSObject

@property (retain) NSBundle *bundle;
@property (retain) IAAccount *account;
@property (retain) IAProvider *provider;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (long long)authType;
- (Class)authenticatorClass;
- (id)imageForAccount:(id)a0;
- (BOOL)isSocial;
- (void)pluginDidLoad;
- (id)specialPluginBehaviors;
- (id)userVisibleProviderName;
- (void)willSelectAccount:(id)a0;

@end
