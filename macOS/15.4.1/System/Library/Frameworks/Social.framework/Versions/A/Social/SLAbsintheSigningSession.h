@class NSString;

@interface SLAbsintheSigningSession : NSObject {
    NSString *_certURL;
    NSString *_sessionURL;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_urlEncodedString:(id)a0;
- (BOOL)establish;
- (id)initWithCertURL:(id)a0 sessionURL:(id)a1;
- (id)signatureForData:(id)a0;

@end
