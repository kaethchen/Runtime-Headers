@class NSSet, NSString, NSNetService;

@interface SMNNetServiceResolver : NSObject <NSNetServiceDelegate>

@property (retain) NSNetService *service;
@property (copy) id /* block */ complete;
@property BOOL disallowsIPV6;
@property (retain) NSSet *alreadyResolvedAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)initWithServiceName:(id)a0 disallowsIPV6:(BOOL)a1;
- (void)resolveAddressesWithCompletion:(id /* block */)a0;

@end
