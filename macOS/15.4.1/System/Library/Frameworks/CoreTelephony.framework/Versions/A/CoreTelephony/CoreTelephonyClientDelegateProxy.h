@class NSString;

@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface> {
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _userQueue;
}

@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a0;

@end
