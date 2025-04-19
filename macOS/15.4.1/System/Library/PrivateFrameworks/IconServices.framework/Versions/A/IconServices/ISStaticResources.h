@class NSCache, NSDictionary;

@interface ISStaticResources : NSObject

@property (retain) NSCache *cache;
@property (retain) NSDictionary *_fileResourcesAssetNameMaps;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_addStaticImage:(id)a0 withKey:(id)a1;
- (id)_assetCatalogResourceWithName:(id)a0 fromURL:(id)a1 cacheKey:(id)a2;
- (id)_fileExtensionAndUTIToAssetNameMap;
- (id)_findStaticImageWithKey:(id)a0;
- (id)debugGenericAppIconResource;
- (id)defaultMacDarkFolderResource;
- (id)defaultMacDataResource;
- (id)defaultMacFolderResource;
- (id)defaultMacUnknownFSObjectResource;
- (id)fallbackResourceForHint:(id)a0 descriptor:(id)a1 referenceObj:(id)a2;
- (id)genericAppClipIconResource;
- (id)genericAppIconResource;
- (id)genericAppIconResourceForPlatform:(unsigned long long)a0;
- (id)resourceForKnownFileTypesFromHint:(id)a0;

@end
