@class MPMediaLibraryView, NSMapTable, NSDictionary, NSMutableDictionary, NSString, MPSectionedCollection, MPPropertySet;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse;
@property (retain, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)a0 personalizationProperties:(id)a1 overrideLibraryAddedStatus:(long long)a2;
+ (id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)a0 libraryLyrics:(id)a1 identifiers:(id)a2 personalizationProperties:(id)a3;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)a0 libraryObject:(id)a1 personalizationProperties:(id)a2 overrideLibraryAddedStatus:(long long)a3;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 identifiers:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 libraryPlaybackPosition:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)a0 libraryAsset:(id)a1 personalizationProperties:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)_libraryObjectWithRelativeModelClass:(Class)a0 identifierSet:(id)a1 propertySet:(id)a2;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;

@end
