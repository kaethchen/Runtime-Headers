@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL canAddPhotosLocally;
@property (readonly, nonatomic) BOOL canShowPhotosLocally;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL supportsReportingIssue;
@property (readonly, nonatomic) BOOL requiresAttributionInPhotoViewerHeader;

- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 poiID:(id)a3;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 yelpID:(id)a3;
- (id)urlsForPhotoWithIdentifier:(id)a0;

@end
