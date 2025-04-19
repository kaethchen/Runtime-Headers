@class NSXPCListener, NSMutableArray, NSString;

@interface TFontProviderClientXPC : NSObject <NSXPCListenerDelegate> {
    struct __CFRunLoopSource { } *fRunLoopSource;
    struct __CFRunLoop { } *fPossibleRunLoop;
    id /* block */ fCallback;
}

@property (retain, nonatomic) NSMutableArray *fRequests;
@property (retain, nonatomic) NSXPCListener *fListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)signal;
- (id)initWithCallback:(id /* block */)a0;
- (void)addRequest:(id)a0;
- (void)callFontProvider;
- (void)setRunLoopSource:(struct __CFRunLoopSource { } *)a0 withCurrentRunLoop:(struct __CFRunLoop { } *)a1;

@end
