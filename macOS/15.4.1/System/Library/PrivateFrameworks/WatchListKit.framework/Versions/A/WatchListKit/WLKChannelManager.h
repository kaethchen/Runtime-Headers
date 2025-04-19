@class NSXPCConnection;

@interface WLKChannelManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultChannelManager;

- (void).cxx_destruct;
- (void)_invalidationHandler;
- (void)vppaConsentedBundleIDsWithCompletion:(id /* block */)a0;

@end
