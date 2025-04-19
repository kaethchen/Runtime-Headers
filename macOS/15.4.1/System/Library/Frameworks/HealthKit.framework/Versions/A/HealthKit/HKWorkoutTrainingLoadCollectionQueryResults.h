@class NSDictionary, HKWorkoutTrainingLoadCollection;

@interface HKWorkoutTrainingLoadCollectionQueryResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *collectionByActivityType;
@property (readonly, copy) HKWorkoutTrainingLoadCollection *totalTrainingLoadCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activityTypes;
- (id)initWithTotalTrainingLoadCollection:(id)a0 collectionByActivityType:(id)a1;
- (id)trainingLoadCollectionForActivityType:(unsigned long long)a0;

@end
