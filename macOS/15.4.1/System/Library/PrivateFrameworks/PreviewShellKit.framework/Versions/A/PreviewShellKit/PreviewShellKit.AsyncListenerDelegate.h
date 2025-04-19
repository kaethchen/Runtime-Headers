@interface PreviewShellKit.AsyncListenerDelegate : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ serviceConnectionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
