@class NSString;

@interface WBSBrowsingDataImportService : NSObject <WBSBrowsingDataImportServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseChromeExtensionsFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseNetscapeBookmarkFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseChromeHistoryJSONFromFileHandle:(id)a0 ageLimit:(double)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)parseCreditCardJSONFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseExtensionsFromFileHandle:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseHistoryJSONFromFileHandle:(id)a0 ageLimit:(double)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;

@end
