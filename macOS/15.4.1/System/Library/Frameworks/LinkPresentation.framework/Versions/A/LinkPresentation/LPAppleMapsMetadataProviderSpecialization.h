@class LPMapMetadata, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, MKLinkPreviewMetadataRequest, MKLinkPreviewSnapshotRequest;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    MKLinkPreviewMetadataRequest *_request;
    MKLinkPreviewSnapshotRequest *_snapshotRequest;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
    LPMapCollectionPublisherMetadata *_publisherMetadata;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)complete;
- (void)fail;
- (id)mapMetadataWithSearch:(id)a0 snapshot:(id)a1;
- (void)_internalPostProcessResolvedMetadataWithCompletionHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0 URLParser:(id)a1;
- (id)mapMetadataWithDirections:(id)a0;
- (id)mapMetadataWithGuide:(id)a0 snapshot:(id)a1;
- (id)mapMetadataWithLocationInfo:(id)a0 snapshot:(id)a1;
- (id)mapMetadataWithPublisher:(id)a0;

@end
