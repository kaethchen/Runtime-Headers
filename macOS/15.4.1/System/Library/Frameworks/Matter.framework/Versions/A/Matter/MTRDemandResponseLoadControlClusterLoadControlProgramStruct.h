@class NSData, NSString, NSNumber;

@interface MTRDemandResponseLoadControlClusterLoadControlProgramStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *programID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *enrollmentGroup;
@property (copy, nonatomic) NSNumber *randomStartMinutes;
@property (copy, nonatomic) NSNumber *randomDurationMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
