@class NSString, NSMutableDictionary, NSXPCInterface;

@interface IsolatedCoreAudioClientNSXPCListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCInterface *mInterface;
@property (retain, nonatomic) NSMutableDictionary *mConnections;
@property (nonatomic) struct function<void (int)> { struct __value_func<void (int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mClientReaper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (id)initWithInterface:(id)a0;
- (unsigned int)getUseCaseIDForPID:(int)a0;
- (id)lookupConnectionForPID:(int)a0;
- (void)setClientReaper:(struct function<void (int)> { struct __value_func<void (int)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)setUseCaseIDForCurrentConnection:(unsigned int)a0;

@end
