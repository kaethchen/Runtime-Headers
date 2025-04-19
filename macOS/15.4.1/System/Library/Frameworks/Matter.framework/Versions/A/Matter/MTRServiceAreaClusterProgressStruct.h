@class NSNumber;

@interface MTRServiceAreaClusterProgressStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *areaID;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *totalOperationalTime;
@property (copy, nonatomic) NSNumber *estimatedTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
