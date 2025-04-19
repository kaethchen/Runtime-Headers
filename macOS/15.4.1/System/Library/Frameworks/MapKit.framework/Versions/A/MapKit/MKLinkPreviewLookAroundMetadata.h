@class NSString, CNPostalAddress;

@interface MKLinkPreviewLookAroundMetadata : MKLinkPreviewMetadata <MKLinkPreviewLocationInfoInternal, MKLinkPreviewLocationInfo>

@property (nonatomic) BOOL isPointOfInterest;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CNPostalAddress *addressComponents;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionType:(long long)a0 mapType:(unsigned long long)a1;

@end
