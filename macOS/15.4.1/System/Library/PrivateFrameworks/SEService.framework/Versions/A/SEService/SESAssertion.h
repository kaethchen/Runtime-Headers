@class NSString, NSObject;
@protocol SESAssertionInterface, NSXPCProxyCreating;

@interface SESAssertion : NSObject <SESAssertionCallbackInterface> {
    NSObject<SESAssertionInterface, NSXPCProxyCreating> *_proxy;
}

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)didInvalidate;
- (id)proxy;
- (void)setProxy:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 appletIdentifier:(id)a1;

@end
