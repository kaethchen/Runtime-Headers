@class NSNumber, NSArray;

@interface APCSIntegrityReport : APConfiguration

@property (readonly, nonatomic) NSNumber *reportingFrequency;
@property (readonly, nonatomic) NSArray *reportingPurposes;
@property (readonly, nonatomic) NSNumber *deliveryLeeway;
@property (readonly, nonatomic) NSNumber *reportEnabled;

+ (id)path;

@end
