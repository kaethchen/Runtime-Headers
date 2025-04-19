@class NSXPCListener, NSString, NSItemProvider;

@interface _EXSourceLoadOperator : _EXLoadOperator <NSSecureCoding, NSXPCListenerDelegate, _EXLoadOperatorXPCProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSXPCListener *listener;
@property (readonly, weak) NSItemProvider *itemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithItemProvider:(id)a0;
- (void)previewImageWithClassName:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)resolveWithIdentifier:(id)a0 className:(id)a1 options:(id)a2 reply:(id /* block */)a3;

@end
