@class NSMutableDictionary;

@interface CIFilterListProvider : NSObject {
    BOOL _isInternal;
    NSMutableDictionary *_collections;
}

+ (id)sharedFilterListProvider;

- (id)init;
- (void)removeCollection:(id)a0;
- (id)localizedDescriptionForFilterName:(id)a0;
- (id)localizedNameForCategory:(id)a0;
- (id)localizedNameForFilterName:(id)a0;
- (void)addCollection:(id)a0;
- (id)_getCollections;
- (void)_saveCollections;
- (void)addFilter:(id)a0 toCollection:(id)a1;
- (id)getAllCategories;
- (id)getAllCollections;
- (id)getAllFiltersNotInCategories:(id)a0;
- (id)getFiltersInCategory:(id)a0;
- (id)getFiltersInCollection:(id)a0;
- (void)removeFilter:(id)a0 toCollection:(id)a1;
- (void)renameCollection:(id)a0 newName:(id)a1;
- (id)uniqueNewCollectionName;

@end
