@class NSURL, NSString, MUPlaceDataAvailability;

@interface MUPlaceItemActionDataProvider : MKPlaceItemActionDataProvider <MKPlaceActionDataProviding> {
    MUPlaceDataAvailability *_availability;
    BOOL _isDroppedPinOrAddressInSupportedCustomRouteRegion;
}

@property (readonly, nonatomic) BOOL supportsMessagesForBusiness;
@property (readonly, nonatomic) BOOL supportsAddingPhotos;
@property (readonly, nonatomic) NSURL *messagesForBusinessURL;
@property (readonly, nonatomic) BOOL canShowCallAction;
@property (readonly, nonatomic) BOOL isInSupportedCustomRouteRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_placeItemDidUpdate;

@end
