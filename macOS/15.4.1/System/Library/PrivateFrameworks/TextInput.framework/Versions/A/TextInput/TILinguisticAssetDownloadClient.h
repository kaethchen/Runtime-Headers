@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>

+ (id)_dispatchQueue;
+ (id /* block */)_internalAssertionRequestHandlerForHandler:(id /* block */)a0 connection:(id)a1;
+ (id /* block */)_internalFetchAssetUpdateStatusRequestHandler:(id /* block */)a0 connection:(id)a1;
+ (id /* block */)_internalHandlerForHandler:(id /* block */)a0 connection:(id)a1;
+ (id /* block */)_internalUpdateAssetRequestHandler:(id /* block */)a0 connection:(id)a1;

- (id)_newXPCConnection;
- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;
- (void)requestLinguisticAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)updateAssetForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;

@end
