@class NSLock, NSString, NSMutableDictionary, IDSAccount, IDSService;

@interface SSAddressResolver : NSObject <IDSServiceDelegate, IDSIDQueryControllerDelegate, DNSResolverObserver> {
    BOOL mIsOSX_10OrLater;
}

@property (retain) NSMutableDictionary *observersMap;
@property (copy) NSString *idsIDQueryListenerID;
@property (copy) NSString *iOSIDSIDQueryListenerID;
@property (readonly, nonatomic) IDSAccount *idsAccount;
@property BOOL isIOSinvitation;
@property (readonly) IDSService *currentIDSService;
@property BOOL idsInviteAcceptedOnScreensharingQRService;
@property (retain) IDSService *idsServiceOSX_QR;
@property (retain) IDSService *idsService;
@property (retain) IDSService *iOSidsService;
@property (retain) NSLock *observersLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolver;
+ (id)deviceIDForURLOptions:(id)a0;
+ (id)idsIDsForABPersonID:(id)a0;
+ (BOOL)isAppleIDOnlyDomain:(id)a0;

- (void)dealloc;
- (id)init;
- (void)serviceSpaceDidBecomeAvailable:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 sentBytes:(long long)a3 totalBytes:(long long)a4;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingPendingMessageOfType:(long long)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 linkedDevicesChanged:(id)a1;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)serviceAllowedTrafficClassifiersDidReset:(id)a0;
- (id)networkAddressTypeForSSAddress:(id)a0;
- (id)setupXPCConnectionWithObserver:(id)a0;
- (BOOL)addIDSServiceMessageObserver:(id)a0 forSession:(id)a1;
- (void)dnsResolverError:(id)a0;
- (void)dnsResolverResolvedAddress:(id)a0 userInfo:(id)a1;
- (void)dnsResolverResolvedHostname:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0 userInfo:(id)a1;
- (BOOL)foundBTMMInString:(id)a0;
- (BOOL)isLocal:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;
- (BOOL)isLocal:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0 withPort:(long long)a1;
- (int)localhostMatchesAddress:(id)a0;
- (void)removeIDSServiceMessageObserver:(id)a0;
- (void)removeObserver:(id)a0 forResolutionOfURL:(id)a1;
- (void)resolveAddressViaBonjour:(id)a0;
- (void)resolveURL:(id)a0 forObserver:(id)a1;
- (void)returnAddresses:(id)a0 forRequest:(id)a1 withStatus:(int)a2;

@end
