@class NSNumber;

@interface MTRDoorLockClusterLockUserChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *lockDataType;
@property (copy, nonatomic) NSNumber *dataOperationType;
@property (copy, nonatomic) NSNumber *operationSource;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *sourceNode;
@property (copy, nonatomic) NSNumber *dataIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
