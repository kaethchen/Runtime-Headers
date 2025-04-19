@class CWFInterface, NSXPCConnection;

@interface CWXPCClient : NSObject {
    CWFInterface *_corewifi;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) CWFInterface *corewifi;

- (void)dealloc;
- (id)__corewifi;
- (id)__corewifiEndpoint;
- (id)corewifi;

@end
