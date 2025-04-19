@class FCPersonalizationWhitelist;

@interface StocksCore.NoFavoritesPersonalizer : _TtCs12_SwiftObject <FCFavoritesPersonalizer>

@property (nonatomic, readonly) FCPersonalizationWhitelist *whitelist;

- (void)prepareFavorites:(id /* block */)a0;
- (unsigned long long)whitelistLevelForTagID:(id)a0;

@end
