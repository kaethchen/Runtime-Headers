@class CSImportAgentConnection;
@protocol CSIndexExtensionDelegate;

@interface CSImportAgent : NSObject

@property (readonly, nonatomic) CSImportAgentConnection *agentConnection;
@property (weak) id<CSIndexExtensionDelegate> extensionDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)extensionsLoaded;

@end
