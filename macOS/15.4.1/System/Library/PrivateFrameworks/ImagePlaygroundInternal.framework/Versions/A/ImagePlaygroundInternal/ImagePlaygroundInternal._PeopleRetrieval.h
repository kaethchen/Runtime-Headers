@interface ImagePlaygroundInternal._PeopleRetrieval : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ _fetcher;
    void /* unknown type, empty encoding */ _observablePHFetchResults;
    void /* unknown type, empty encoding */ _personImageCache;
    void /* unknown type, empty encoding */ _faceImageCache;
    void /* unknown type, empty encoding */ _contextualHandles;
    void /* unknown type, empty encoding */ _suggestablePeople;
    void /* unknown type, empty encoding */ _allPeople;
    void /* unknown type, empty encoding */ _isLoadingSuggestions;
    void /* unknown type, empty encoding */ _faceCropFetcher;
    void /* unknown type, empty encoding */ _peopleLoadingTask;
    void /* unknown type, empty encoding */ constants;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;

@end
