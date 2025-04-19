@class LFNotify;

@interface LFLWLiteConnection : LFConnection

@property (retain) LFNotify *notify;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithListenerEndpoint:(id)a0;

@end
