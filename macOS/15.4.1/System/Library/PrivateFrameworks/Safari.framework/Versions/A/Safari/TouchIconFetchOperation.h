@class NSImage, _WKRemoteObjectInterface;

@interface TouchIconFetchOperation : WBSTouchIconFetchOperation {
    _WKRemoteObjectInterface *_faviconObserverInterface;
    NSImage *_candidateOSXUserAgentIcon;
    BOOL _didTryWithIPhoneUserAgent;
}

- (void).cxx_destruct;
- (BOOL)_shouldTryDownloadingIconsWithIPhoneUserAgentForProposeIcon:(id)a0 isFavicon:(BOOL)a1;
- (void)_tryWithIPhoneUserAgent;
- (void)didCompleteWithResult:(id)a0;

@end
