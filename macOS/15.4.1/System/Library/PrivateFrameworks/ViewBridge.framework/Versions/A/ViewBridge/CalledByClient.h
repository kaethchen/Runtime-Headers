@interface CalledByClient : NSObject <ClientCallsAuxiliary>

- (void)forApp:(struct { unsigned int x0[8]; })a0 retrievePreviewEndpoint:(id /* block */)a1;
- (void)_addFreeWindow:(const struct { struct { unsigned int x0[8]; } x0; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x1; } *)a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)_requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)addFreeWindow:(struct { struct { unsigned int x0[8]; } x0; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x1; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (id)endpointForHostApp:(id)a0;
- (void)hostApp:(struct { unsigned int x0[8]; })a0 description:(id /* block */)a1;
- (id)hostAppConnectionForListenerEndpoint:(id)a0;
- (id)hostAppDescription:(struct { unsigned int x0[8]; })a0;
- (BOOL)hostAppStartingWith:(id)a0 endpoint:(id)a1;
- (void)hostAppStartingWith:(id)a0 endpoint:(id)a1 reply:(id /* block */)a2;
- (void)requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (BOOL)trustedToAddFreeWindowToArbitraryHostApp;
- (BOOL)viewService:(int)a0 hasHostApp:(int)a1;
- (void)windowForContextID:(unsigned int)a0 fromViewService:(int)a1 reply:(id /* block */)a2;

@end
