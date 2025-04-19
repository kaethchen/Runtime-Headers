@interface PXPhotosSearchCollectionSectionProvider : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ observable;
    void /* unknown type, empty encoding */ badgesModifier;
    void /* unknown type, empty encoding */ collectionResultUUIDs;
    void /* unknown type, empty encoding */ rankedCollectionResultUUIDs;
    void /* unknown type, empty encoding */ promotedRankedCollection;
    void /* unknown type, empty encoding */ topCollections;
    void /* unknown type, empty encoding */ allCollections;
    void /* unknown type, empty encoding */ allPeople;
    void /* unknown type, empty encoding */ searchMatchInfo;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ showsShelfTitle;
    void /* unknown type, empty encoding */ collectionResultsScores;
    void /* unknown type, empty encoding */ photoLibraryObservation;
    void /* unknown type, empty encoding */ albumsFetchResult;
    void /* unknown type, empty encoding */ tripsFetchResult;
    void /* unknown type, empty encoding */ memoriesFetchResult;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;

@end
