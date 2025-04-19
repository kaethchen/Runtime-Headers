@class NSString, NSAppleEventDescriptor, NSURL, NSDate, OSALanguageInstance;

@interface OSAScriptPrivate : NSObject {
    NSString *_source;
    unsigned int _compiledScriptID;
    void *_reserved1;
    void *_reserved2;
    NSURL *_url;
    BOOL _dontSetScriptLocation;
    BOOL _isExecuting;
    NSDate *_date;
    OSALanguageInstance *_languageInstance;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_executionThread;
    NSAppleEventDescriptor *_defaultTarget;
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end
