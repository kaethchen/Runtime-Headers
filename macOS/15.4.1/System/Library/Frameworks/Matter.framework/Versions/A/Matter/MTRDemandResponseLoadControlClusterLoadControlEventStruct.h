@class NSData, NSNumber, NSArray;

@interface MTRDemandResponseLoadControlClusterLoadControlEventStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *eventID;
@property (copy, nonatomic) NSData *programID;
@property (copy, nonatomic) NSNumber *control;
@property (copy, nonatomic) NSNumber *deviceClass;
@property (copy, nonatomic) NSNumber *enrollmentGroup;
@property (copy, nonatomic) NSNumber *criticality;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSArray *transitions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
