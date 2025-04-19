@class LPMapMetadata, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, MKPlaceCuratedCollectionRefiner, CLGeocoder, _MKURLParser, MKPlacePublisherRefiner;

@interface LPLegacyAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    CLGeocoder *_geocoder;
    _MKURLParser *_parser;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
    LPMapCollectionPublisherMetadata *_publisherMetadata;
    MKPlaceCuratedCollectionRefiner *_curatedCollectionRefiner;
    MKPlacePublisherRefiner *_publisherRefiner;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)complete;
- (BOOL)isSearch;
- (void)fail;
- (id)geocoder;
- (void)continueWithSnapshotOfMapItems:(id)a0;
- (void)_internalPostProcessResolvedMetadataWithCompletionHandler:(id /* block */)a0;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithDirections;
- (void)completeWithMapItem:(id)a0;
- (void)completeWithPlacemark:(id)a0;
- (void)completeWithPublisher;
- (void)completeWithSearchQuery:(id)a0;
- (void)continueWithLookAroundSnapshotWithOptions:(id)a0;
- (void)continueWithSnapshotOfMapRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithContext:(id)a0 URLParser:(id)a1;
- (void)populateImageWithMapSnapshot:(id)a0;
- (void)resolveMapRegionWithCompletionHandler:(id /* block */)a0;

@end
