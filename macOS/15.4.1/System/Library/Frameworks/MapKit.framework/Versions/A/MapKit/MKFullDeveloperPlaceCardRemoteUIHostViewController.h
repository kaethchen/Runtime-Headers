@class MKMapItem;

@interface MKFullDeveloperPlaceCardRemoteUIHostViewController : MKPlaceCardRemoteUIHostViewController {
    BOOL _isStandAlonePlaceCard;
    MKMapItem *_mapItem;
    BOOL _dismissButtonDisplayed;
    BOOL _hideInlineMap;
}

- (void).cxx_destruct;
- (void)_configureConnection:(id)a0;
- (id)initAsAccessoryWithMapItem:(id)a0 dismissButtonDisplayed:(BOOL)a1;
- (id)initAsStandAloneWithMapItem:(id)a0 dismissButtonDisplayed:(BOOL)a1 hideInlineMap:(BOOL)a2;

@end
