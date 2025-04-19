@class NSString, NSXPCConnection;
@protocol NSXPCProxyCreating;

@interface WBSBrowsingDataImportServiceProxy : NSObject <WBSBrowsingDataImportServiceProtocol> {
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (void)parseChromeExtensionsFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseNetscapeBookmarkFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id /* block */)_defaultProxyErrorHandlerWithReplyHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 proxy:(id)a1;
- (void)parseChromeHistoryJSONFromFileHandle:(id)a0 ageLimit:(double)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)parseCreditCardJSONFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseExtensionsFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseHistoryJSONFromFileHandle:(id)a0 ageLimit:(double)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;

@end
