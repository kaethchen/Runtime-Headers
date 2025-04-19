@class NSURL, _MKURLParser;

@interface MKLinkPreviewMetadataRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
    id /* block */ _completionHandler;
    _MKURLParser *_parser;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)cancel;
- (void)_failWithError:(id)a0;
- (void)_forwardGeocodeString:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleDirectionsAction;
- (void)_handleFrameAction;
- (void)_handleGuidesAction;
- (void)_handleLookAroundAction;
- (void)_handlePlaceAction;
- (void)_handleReportAProblemAction;
- (void)_handleSearchAction;
- (void)_populateLocationInfo:(id)a0 withMapItem:(id)a1;
- (void)_refineCollectionStorage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_refineCuratedCollectionStorageWithCollectionIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1 completionHandler:(id /* block */)a2;
- (void)_requestCategoryIconFromMapItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestMapItemFromLocationQueryItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestMapItemFromMapItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestPublisherFromPublisherIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1 completionHandler:(id /* block */)a2;
- (void)_reverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)_searchWithQuery:(id)a0 region:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (id)_subtitleFromMapItem:(id)a0 useMultilineAddressFormat:(BOOL)a1;
- (void)getMetadataWithCompletionHandler:(id /* block */)a0;

@end
