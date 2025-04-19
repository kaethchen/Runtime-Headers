@class NSNumber, NSString, CNPostalAddress;

@interface MKLinkPreviewDirectionsMetadata : MKLinkPreviewMetadata

@property (retain, nonatomic) NSNumber *transportType;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceAddress;
@property (copy, nonatomic) CNPostalAddress *sourceAddressComponents;
@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) CNPostalAddress *destinationAddressComponents;
@property (retain, nonatomic) NSNumber *distance;

- (void).cxx_destruct;

@end
