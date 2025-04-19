@class NSXPCConnection, NSXPCInterface;

@interface EPDeveloperTool : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly) long long authorizationStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)requestDeveloperToolAccessWithCompletionHandler:(id /* block */)a0;

@end
