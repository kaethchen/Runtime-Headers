@interface DownloadLocationRemoteViewController : NSRemoteViewController

+ (void)setUpDownloadLocationRemoteViewControllerUsingBlock:(id /* block */)a0;

- (id)serviceViewControllerInterface;
- (void)chooseCustomDownloadLocationWithCompletionHandler:(id /* block */)a0;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 downloadLocationRequestType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)saveWebPageUsingDataProvider:(id)a0 withSuggestedFilename:(id)a1 rawSourceMIMEType:(id)a2 savePanelMode:(long long)a3 completionHandler:(id /* block */)a4;

@end
