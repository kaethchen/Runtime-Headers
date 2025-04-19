@class NSString, NSNumber, NSArray;

@interface APECObservabilityPurposeConfig : APConfiguration <APECPurposeConfigProtocol>

@property (class, readonly, nonatomic) NSString *path;

@property (readonly, nonatomic) NSNumber *purpose;
@property (readonly, nonatomic) NSArray *allowedPurposes;
@property (readonly, nonatomic) NSArray *allowedSources;
@property (readonly, copy, nonatomic) NSString *boundary;
@property (readonly, nonatomic) NSArray *disallowedEvents;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSNumber *samplePercentage;
@property (readonly, nonatomic) NSNumber *samplePeriod;
@property (readonly, nonatomic) NSNumber *collectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *identifier;


@end
