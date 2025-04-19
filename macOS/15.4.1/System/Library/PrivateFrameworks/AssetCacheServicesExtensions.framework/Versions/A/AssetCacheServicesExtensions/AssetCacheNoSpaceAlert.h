@interface AssetCacheNoSpaceAlert : AssetCacheAlert

@property long long cacheLimit;
@property long long reservedVolumeSpace;

- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithCacheLimit:(long long)a0 reservedVolumeSpace:(long long)a1;
- (id)sharingPrefsAnchor;

@end
