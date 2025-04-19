@class NSString;

@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (BOOL)hasEntitlement;
- (void)annotatedAttachmentsForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)attachmentsForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (void)setupWithParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)teardownWithParameters:(id)a0 withHandler:(id /* block */)a1;

@end
