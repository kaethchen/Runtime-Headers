@interface IKIrisListener : NSObject {
    id _delegate;
    void *_irisMatcher;
    struct __CFArray { } *_irisListeners;
    BOOL _irisClosedInitialized;
    BOOL _irisClosed;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)iSightRanOffWithItsListener:(struct IrisListener { void /* function */ **x0; unsigned int x1; struct IONotificationPort *x2; unsigned int x3; struct __CFRunLoopSource *x4; id x5; } *)a0;
- (void)irisClosed;
- (void)irisOpened;
- (BOOL)isIrisClosed;
- (void)matcher:(struct IrisMatcher { void /* function */ **x0; struct __CFDictionary *x1; char *x2; struct __CFRunLoop *x3; struct IONotificationPort *x4; id x5; } *)a0 foundService:(unsigned int)a1;
- (void)setIrisClosed:(BOOL)a0;

@end
