@class NSString, NSCache;

@interface _ICNFMCISPOnlineAccountSettingsManager : ICNFMCISPAccountSettingsManager {
    NSCache *_fetchedISPPlistsByDomain;
}

@property (readonly, copy, nonatomic) NSString *ispAccountsXQuery;

- (id)init;
- (void).cxx_destruct;
- (void)emptyCache;
- (id)_deliveryAccountsSettingsForDomain:(id)a0 fetchIfNecessary:(BOOL)a1;
- (id)_fetchISPDataForDomain:(id)a0;
- (void)_finalizeISPAccountsSettings:(id)a0;
- (id)_ispPlistForDomain:(id)a0;
- (id)_ispPlistFromXMLDocument:(id)a0;
- (id)_persistanceFolderName;
- (id)_receivingAccountSettingsForDomain:(id)a0 fetchIfNecessary:(BOOL)a1;
- (BOOL)_shouldVerifyLoadedISPPlist;

@end
