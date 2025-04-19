@class NSDate;

@interface RTBackgroundInertialOdometrySampleMO : NSManagedObject

@property (copy, nonatomic) NSDate *cfAbsTimestamp;
@property (nonatomic) double machContinuousTimestamp_s;
@property (nonatomic) double sampleInterval_s;
@property (nonatomic) double deltaPositionX_m;
@property (nonatomic) double deltaPositionY_m;
@property (nonatomic) double deltaPositionZ_m;
@property (nonatomic) double deltaVelocityX_mps;
@property (nonatomic) double deltaVelocityY_mps;
@property (nonatomic) double deltaVelocityZ_mps;
@property (nonatomic) double quaternionX;
@property (nonatomic) double quaternionY;
@property (nonatomic) double quaternionZ;
@property (nonatomic) double quaternionW;

+ (id)fetchRequest;
+ (id)managedObjectWithCLBackgroundInertialOdometrySample:(id)a0 inManagedObjectContext:(id)a1;

@end
