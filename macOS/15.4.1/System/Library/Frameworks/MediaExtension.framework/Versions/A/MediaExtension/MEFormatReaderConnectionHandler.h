@class NSString, NSXPCConnection;
@protocol MEFormatReader;

@interface MEFormatReaderConnectionHandler : NSObject <_EXMainConnectionHandler, FigExtensionConnectionHandler>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<MEFormatReader> extensionFormatReader;
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
