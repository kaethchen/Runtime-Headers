@interface DS_TDSHelperConnectionHandler : NSObject {
    void *_helper;
    struct TDSMutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } fMutex; } _mutex;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHelper:(void *)a0;
- (void)clearHelper;
- (void)handleHelperEvent:(id)a0;

@end
