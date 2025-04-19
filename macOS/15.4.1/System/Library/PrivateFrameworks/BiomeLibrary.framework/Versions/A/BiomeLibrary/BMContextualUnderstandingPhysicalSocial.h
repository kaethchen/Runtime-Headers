@class NSString, NSArray;

@interface BMContextualUnderstandingPhysicalSocial : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSArray *discoveredPeople;
@property (readonly, nonatomic) double startTimeInSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasStartTimeInSecondsSinceReferenceDate;
@property (readonly, nonatomic) double endTimeInSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasEndTimeInSecondsSinceReferenceDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_discoveredPeopleJSONArray;
- (id)initWithLocalIdentifier:(id)a0 discoveredPeople:(id)a1 startTimeInSecondsSinceReferenceDate:(id)a2 endTimeInSecondsSinceReferenceDate:(id)a3;

@end
