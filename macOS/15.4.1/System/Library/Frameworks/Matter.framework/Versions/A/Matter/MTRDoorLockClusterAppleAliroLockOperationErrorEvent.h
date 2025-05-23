@class NSNumber, NSArray;

@interface MTRDoorLockClusterAppleAliroLockOperationErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *lockOperationType;
@property (copy, nonatomic) NSNumber *operationError;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSArray *credentials;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
