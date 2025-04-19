@class MKMapItemIdentifier;
@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;

@interface MKPlaceCuratedCollectionRefiner : NSObject {
    MKMapItemIdentifier *_collectionIdentifier;
    id<MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;
    id<MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;
}

- (void).cxx_destruct;
- (void)fetchWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithCollectionIdentifier:(unsigned long long)a0;
- (id)initWithCollectionIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1;

@end
