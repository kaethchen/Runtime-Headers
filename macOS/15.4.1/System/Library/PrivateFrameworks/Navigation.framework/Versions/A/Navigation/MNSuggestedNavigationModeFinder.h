@class GEOComposedRoute, GEOCountryConfiguration;

@interface MNSuggestedNavigationModeFinder : NSObject

@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) BOOL ignoreDeviceNavigability;
@property (retain, nonatomic) GEOCountryConfiguration *countryConfiguration;

- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 context:(unsigned long long)a1;
- (id)initWithRoute:(id)a0 context:(unsigned long long)a1 ignoreDeviceNavigability:(BOOL)a2;
- (unsigned long long)suggestedNavigationModeForLocation:(id)a0;

@end
