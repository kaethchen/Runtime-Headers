@class NSString, SUCoreConnectClientProxy, SUMacControllerDescriptor, SUMacControllerOverrides, SUMacControllerProgressManager, SUMacControllerAccessControlContext;

@interface SUMacControllerClientRequest : NSObject

@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) NSString *cookie;
@property (readonly, retain, nonatomic) NSString *command;
@property (readonly, retain, nonatomic) SUCoreConnectClientProxy *proxyObject;
@property (readonly, retain, nonatomic) SUMacControllerProgressManager *progressManager;
@property (readonly, retain, nonatomic) id /* block */ completion;
@property (retain, nonatomic) SUMacControllerDescriptor *descriptor;
@property (readonly, retain, nonatomic) SUMacControllerOverrides *overrides;
@property (retain, nonatomic) SUMacControllerAccessControlContext *accessControlContext;
@property (readonly, retain, nonatomic) id /* block */ scanCompletion;
@property (readonly, retain, nonatomic) id /* block */ documentationCompletion;
@property (readonly, retain, nonatomic) id /* block */ splatScanCompletion;
@property (readonly, retain, nonatomic) id /* block */ sfrScanCompletion;

+ (BOOL)_shouldFetchSSOTokenForCommand:(id)a0 descriptor:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)_initFromMessage:(id)a0 proxyObject:(id)a1 scanCompletion:(id /* block */)a2 documentationCompletion:(id /* block */)a3 splatScanCompletion:(id /* block */)a4 sfrScanCompletion:(id /* block */)a5;
- (void)clientRequestComplete;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 completion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 documentationCompletion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 scanCompletion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 sfrScanCompletion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 splatScanCompletion:(id /* block */)a2;

@end
