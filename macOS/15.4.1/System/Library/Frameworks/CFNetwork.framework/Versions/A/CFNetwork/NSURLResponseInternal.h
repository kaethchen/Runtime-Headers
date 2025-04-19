@interface NSURLResponseInternal : NSObject {
    struct URLResponse { void /* function */ **_vptr$CoreLoggable; struct __CFURL *fURL; struct __CFString *fMIMEType; struct __CFString *fTextEncodingName; long long fExpectedContentLength; double fExpiration; double fCreationTime; struct __CFDictionary *fDownloadAssessment; struct __CFDictionary *fSSLCertContext; int fRecommendedPolicy; struct __CFData *fPeerAddress; struct HTTPResponse *fHTTP; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock; } _response;
}

@property (readonly) struct URLResponse { void /* function */ **x0; struct __CFURL *x1; struct __CFString *x2; struct __CFString *x3; long long x4; double x5; double x6; struct __CFDictionary *x7; struct __CFDictionary *x8; int x9; struct __CFData *x10; struct HTTPResponse *x11; struct os_unfair_lock_s { unsigned int x0; } x12; } *_inner;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct URLResponse { void /* function */ **x0; struct __CFURL *x1; struct __CFString *x2; struct __CFString *x3; long long x4; double x5; double x6; struct __CFDictionary *x7; struct __CFDictionary *x8; int x9; struct __CFData *x10; struct HTTPResponse *x11; struct os_unfair_lock_s { unsigned int x0; } x12; } *)_inner;

@end
