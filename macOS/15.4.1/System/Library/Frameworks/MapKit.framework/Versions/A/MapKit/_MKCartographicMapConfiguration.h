@class NSString;

@interface _MKCartographicMapConfiguration : MKMapConfiguration <MKMapConfigurationHiking>

@property (readonly, nonatomic) struct { long long style; long long emphasis; long long projection; long long terrainMode; long long mapkitUsage; long long mapkitClientMode; BOOL gridOnly; } cartographicConfiguration;
@property (nonatomic) BOOL showsHiking;
@property (nonatomic) BOOL showsTopographicFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (id)initWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; BOOL x6; })a0;
- (BOOL)isEqualToCartographicMapConfiguration:(id)a0;

@end
