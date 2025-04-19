@class GEOResourceManifestManager, NSString, NSSet, NSDictionary, GEOResourceManager, geo_isolater;

@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver> {
    NSSet *_alwaysVisibleTypes;
    NSDictionary *_categoryToTypeMapping;
    NSDictionary *_typeToCategoryMapping;
    geo_isolater *_accessLock;
    GEOResourceManifestManager *_manifestManager;
    GEOResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMapping;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_tearDown;
- (id)alwaysVisibleTypes;
- (id)categoryForPOIType:(int)a0;
- (id)categoryToTypeMapping;
- (void)clearCachedValues;
- (id)initWithResourceManifestManager:(id)a0 resourceManager:(id)a1;
- (BOOL)isAlwaysVisiblePOIType:(int)a0;
- (void)loadPOICategoriesJSON;
- (BOOL)parseCategoryMappingJSON:(id)a0 categoryToPOIType:(id *)a1 POITypeToCategory:(id *)a2;
- (void)parsePOICategoriesJSON:(id)a0;
- (id)parseVisiblePOITypesJSON:(id)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id)typeToCategoryMapping;
- (id)typesForPOICategories:(id)a0;

@end
