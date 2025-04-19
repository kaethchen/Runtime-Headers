@class NSString, NSXPCConnection;
@protocol MERAWProcessorExtension;

@interface MERAWProcessorConnectionHandler : NSObject <_EXMainConnectionHandler, FigExtensionConnectionHandler>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<MERAWProcessorExtension> extensionFactory;
@property (readonly) id principalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startConnectionWithOptions:(id)a0;
- (id)principalObject;
- (id)initWithPrincipalObject:(id)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
