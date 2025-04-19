@class NSString;

@interface AssetCacheResourceMissingAlert : AssetCacheAlert

@property (retain) NSString *resource;
@property (retain) NSString *pathPreventingAccess;

- (void).cxx_destruct;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)a0;
- (id)initWithResource:(id)a0 pathPreventingAccess:(id)a1;
- (id)sharingPrefsAnchor;
- (id)verboseText;

@end
