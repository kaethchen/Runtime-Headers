@class NSNumber;

@interface CSLocationTag : CSNumericAnalysisTag

@property (readonly, nonatomic) NSNumber *location;
@property (readonly, nonatomic) NSNumber *parent;
@property (readonly, nonatomic) NSNumber *country;
@property (readonly, nonatomic) double lat;
@property (readonly, nonatomic) double lng;

- (void).cxx_destruct;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithLocation:(id)a0 parent:(id)a1 country:(id)a2 lat:(double)a3 lng:(double)a4 confidence:(double)a5;
- (id)initWithPrimaryValue:(id)a0 components:(id)a1 confidence:(double)a2;

@end
