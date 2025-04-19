@class WKSecurityOrigin, NSUUID, NSString, WKWebView, _WKFrameHandle, NSURLRequest;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::FrameInfo> { struct type { unsigned char __lx[400]; } data; } _frameInfo;
}

@property (readonly, copy, nonatomic) _WKFrameHandle *_handle;
@property (readonly, copy, nonatomic) _WKFrameHandle *_parentFrameHandle;
@property (readonly, copy, nonatomic) NSUUID *_documentIdentifier;
@property (readonly, nonatomic) int _processIdentifier;
@property (readonly, nonatomic) BOOL _isLocalFrame;
@property (readonly, nonatomic) BOOL _isFocused;
@property (readonly, nonatomic) BOOL _errorOccurred;
@property (readonly, copy, nonatomic) NSString *_title;
@property (readonly, nonatomic) BOOL _isScrollable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _visibleContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _visibleContentSizeExcludingScrollbars;
@property (readonly, nonatomic, getter=isMainFrame) BOOL mainFrame;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) WKSecurityOrigin *securityOrigin;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
