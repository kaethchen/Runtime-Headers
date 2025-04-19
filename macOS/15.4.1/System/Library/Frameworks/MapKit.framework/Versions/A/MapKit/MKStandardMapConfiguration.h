@class MKPointOfInterestFilter, NSString;

@interface MKStandardMapConfiguration : MKMapConfiguration <MKMapConfigurationHiking>

@property (readonly, nonatomic, getter=_allowsTerrainModePromotion) BOOL allowsTerrainModePromotion;
@property (nonatomic) long long emphasisStyle;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;
@property (nonatomic) BOOL showsHiking;
@property (nonatomic) BOOL showsTopographicFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_overlayRequiresModernMap:(id)a0;
+ (BOOL)_overlaySupportsElevation:(id)a0;
+ (BOOL)_overlaysRequireModernMap:(id)a0;
+ (BOOL)_overlaysSupportElevation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (id)initWithElevationStyle:(long long)a0;
- (id)initWithElevationStyle:(long long)a0 emphasisStyle:(long long)a1;
- (id)initWithEmphasisStyle:(long long)a0;
- (BOOL)isEqualToStandardMapConfiguration:(id)a0;

@end
