@class ASWebAuthenticationSessionRequest, NSArray, NSURL, BrowserDocument, NSHTTPURLResponse;

@interface AuthenticationSession : NSObject <AuthenticationSessionNavigationHandling> {
    BrowserDocument *_document;
    NSArray *_customAnchorCertificates;
    NSHTTPURLResponse *_errorURLResponse;
}

@property (readonly, nonatomic) ASWebAuthenticationSessionRequest *request;
@property (retain, nonatomic) NSURL *downloadedFileURL;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_windowWillClose:(id)a0;
- (void)_tearDown;
- (id)initWithRequest:(id)a0;
- (void)_addWindowToSetupAssistantSpace;
- (void)_registerForWindowCloseNotification;
- (void)_unregisterForWindowCloseNotification;
- (BOOL)canHandleNavigationResponseFromURL:(id)a0 withResponse:(id)a1;
- (BOOL)canHandleUntrustedProtectionSpace:(id)a0;
- (void)didCompleteDownload;
- (BOOL)handleNavigationToURL:(id)a0;

@end
