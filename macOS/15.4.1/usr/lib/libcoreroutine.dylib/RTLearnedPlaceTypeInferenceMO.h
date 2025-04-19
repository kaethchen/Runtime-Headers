@class NSUUID, NSDate;

@interface RTLearnedPlaceTypeInferenceMO : NSManagedObject

@property (nonatomic) short metricSource;
@property (nonatomic) short placeType;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *sessionId;
@property (copy, nonatomic) NSUUID *learnedPlaceIdentifier;
@property (copy, nonatomic) NSDate *creationDate;

+ (id)fetchRequest;
+ (id)initWithLearnedPlaceTypeInference:(id)a0 managedObjectContext:(id)a1;
+ (id)managedObjectWithIdentifier:(id)a0 sessionId:(id)a1 learnedPlaceIdentifier:(id)a2 placeType:(unsigned long long)a3 metricSource:(unsigned long long)a4 creationDate:(id)a5 managedObjectContext:(id)a6;

@end
