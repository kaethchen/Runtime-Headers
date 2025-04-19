@class NSUUID;

@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID *_primaryResidentIdentifier;
}

- (void).cxx_destruct;
- (BOOL)_clientIsEnabled:(id)a0;
- (BOOL)clientIsEnabled:(id)a0;
- (id)dumpStateDescription;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (unsigned long long)messageTransportRestriction;

@end
