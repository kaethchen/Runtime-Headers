@class NSXPCConnection, NSXPCInterface;

@interface SPInstallationPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    BOOL _requireDaemon;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canInstallPackage:(id)a0 withUserConsent:(BOOL)a1 withHash:(id)a2 evaluateOnly:(BOOL)a3 synchronousPrompt:(BOOL)a4 error:(id *)a5;
- (BOOL)trustPackagePayload:(id)a0 withDestinationTarget:(id)a1 withHashMap:(id)a2 withUserConsent:(BOOL)a3 error:(id *)a4;
- (BOOL)trustPackagePayload:(id)a0 withDestinationTarget:(id)a1 withUserConsent:(BOOL)a2 error:(id *)a3;

@end
