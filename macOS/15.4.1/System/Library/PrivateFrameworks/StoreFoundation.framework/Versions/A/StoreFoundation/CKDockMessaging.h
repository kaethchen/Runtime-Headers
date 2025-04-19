@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object;

@interface CKDockMessaging : NSObject {
    NSObject<OS_xpc_object> *_xpcDockConnection;
    NSMutableDictionary *_cachedIconPaths;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_xpcDispatchQueue;
- (id)_xpcDockConnection;
- (id)cachedIconPathForProductID:(id)a0;
- (void)loadIconForIdentifier:(id)a0 fromURL:(id)a1 storeClient:(id)a2;
- (void)loadIconForProductID:(id)a0 fromURL:(id)a1 storeClient:(id)a2;
- (void)loadIconForProductWithInfo:(id)a0 storeClient:(id)a1;
- (void)sendDockMessage:(int)a0;
- (void)sendInitialMessageForDownload:(id)a0;
- (void)sendInitialMessageForProductID:(id)a0 title:(id)a1 bundleID:(id)a2 action:(int)a3 flyOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 imagePath:(id)a5;
- (void)sendMessageForDownload:(id)a0 status:(id)a1;
- (id)xpcObjectForDownload:(id)a0 status:(id)a1;
- (id)xpcProgressObjectWithType:(int)a0 productID:(const char *)a1 title:(const char *)a2 bundleID:(const char *)a3 imagePath:(const char *)a4 status:(int)a5 progress:(double)a6 installPath:(const char *)a7 downloadedBytes:(double)a8 totalBytes:(double)a9;

@end
