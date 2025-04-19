@class NSString, NSUUID, RTMapItem, NSDate;

@interface RTLearnedPlace : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long typeSource;
@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) NSString *customLabel;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)createWithLearnedLocationOfInterestMO:(id)a0;
+ (id)createWithLearnedPlaceMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;
+ (BOOL)isTypeSourceValid:(unsigned long long)a0;
+ (BOOL)learnedPlaceTypeIsValid:(unsigned long long)a0;
+ (unsigned long long)placeTypeFromLocationOfInterestType:(long long)a0;
+ (unsigned long long)placeTypeFromType:(long long)a0;
+ (unsigned long long)placeTypeSourceFromTypeSource:(unsigned long long)a0;
+ (id)placeTypeSourceToString:(unsigned long long)a0;
+ (id)placeTypeToString:(unsigned long long)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 typeSource:(unsigned long long)a2 mapItem:(id)a3 customLabel:(id)a4 creationDate:(id)a5 expirationDate:(id)a6;
- (id)managedObjectWithContext:(id)a0;
- (void)updateManagedObject:(id)a0;

@end
