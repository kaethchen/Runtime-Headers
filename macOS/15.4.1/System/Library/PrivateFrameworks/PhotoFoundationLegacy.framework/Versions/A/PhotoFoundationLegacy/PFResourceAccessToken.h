@class NSString, NSObject;

@interface PFResourceAccessToken : NSObject <PFResourceAccessClient> {
    int _stackDepth;
    void *_stack[10];
    char **_symbols;
}

@property (readonly) NSString *reason;
@property (readonly) NSObject *resource;
@property BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)backtraceForLog;
- (id)initWithResource:(id)a0 reason:(id)a1;
- (void)resourceWillShutdown:(id)a0;

@end
