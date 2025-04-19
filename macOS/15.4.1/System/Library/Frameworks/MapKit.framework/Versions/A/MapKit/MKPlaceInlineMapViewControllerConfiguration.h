@class GEOApplicationAuditToken;

@interface MKPlaceInlineMapViewControllerConfiguration : NSObject

@property (nonatomic) BOOL useWindowTraitCollectionForUserInterfaceStyle;
@property (nonatomic) BOOL suppressLookAround;
@property (nonatomic) BOOL suppressSectionHeader;
@property (nonatomic) BOOL showMapAttribution;
@property (retain, nonatomic) GEOApplicationAuditToken *mapSnapshotAuditToken;

+ (id)configurationForPlaceViewControllerOptions:(unsigned long long)a0;

- (void).cxx_destruct;

@end
