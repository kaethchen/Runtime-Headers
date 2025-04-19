@interface CCDonateXPCClient : CCXPCClient <CCDonateService>

- (id)initWithClientId:(id)a0;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(unsigned long long)a2 sourceValidity:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)mergeRemoteDelta:(id)a0 peerDeviceSite:(id)a1 relayedDeviceSites:(id)a2 completion:(id /* block */)a3;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
