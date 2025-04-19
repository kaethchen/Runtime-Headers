@interface NSRemoteViewHostAppExportedObject : NSObject <AuxiliaryCallsClient>

- (int)_requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)addFreeWindow:(struct { struct { unsigned int x0[8]; } x0; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x1; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)retrievePreviewEndpoint:(id /* block */)a0;

@end
