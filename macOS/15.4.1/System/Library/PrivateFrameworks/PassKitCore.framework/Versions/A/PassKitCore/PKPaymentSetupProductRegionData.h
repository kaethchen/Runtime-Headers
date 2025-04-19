@class NSArray;

@interface PKPaymentSetupProductRegionData : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, copy, nonatomic) NSArray *inclusionaryZones;
@property (readonly, copy, nonatomic) NSArray *exclusionaryZones;
@property (readonly, nonatomic) double maximumMatchingDistance;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_boundaryDataFromList:(id)a0;
- (id)initWithRegionDataDictionary:(id)a0;

@end
