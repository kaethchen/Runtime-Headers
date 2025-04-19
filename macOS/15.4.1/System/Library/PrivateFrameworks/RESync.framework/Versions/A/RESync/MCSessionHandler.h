@class NSLock, NSString, MCSession;
@protocol MCSessionPrivateDelegate;

@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>

@property (nonatomic) struct MultipeerProtocolLayer { void /* function */ **x0; struct ArcRefCount { union isa_t { void *x0; } x0; } x1; struct Allocator *x2; struct ProtocolLayerListener *x3; struct ObjCObject { id x0; } x4; struct ObjCObject { id x0; } x5; struct Address { struct DynamicString { struct Allocator *x0; union { struct { union { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; } x0; char *x1; unsigned long long x2; } x0; struct { unsigned char x0 : 1; unsigned char x1 : 7; char x2[23]; } x1; } x1; } x0; } x6; } *protocolLayer;
@property (nonatomic) struct ProtocolLayerListener { void /* function */ **x0; } *listener;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) NSLock *handlesLock;
@property (nonatomic) struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } handles;
@property (weak, nonatomic) id<MCSessionPrivateDelegate> nextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4 propagate:(BOOL *)a5;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2 propagate:(BOOL *)a3;
- (id)initWithSession:(id)a0 protocolLayer:(struct MultipeerProtocolLayer { void /* function */ **x0; struct ArcRefCount { union isa_t { void *x0; } x0; } x1; struct Allocator *x2; struct ProtocolLayerListener *x3; struct ObjCObject { id x0; } x4; struct ObjCObject { id x0; } x5; struct Address { struct DynamicString { struct Allocator *x0; union { struct { union { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; } x0; char *x1; unsigned long long x2; } x0; struct { unsigned char x0 : 1; unsigned char x1 : 7; char x2[23]; } x1; } x1; } x0; } x6; } *)a1;

@end
