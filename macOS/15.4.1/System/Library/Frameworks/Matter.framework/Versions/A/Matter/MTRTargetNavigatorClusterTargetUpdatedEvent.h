@class NSArray, NSNumber, NSData;

@interface MTRTargetNavigatorClusterTargetUpdatedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *targetList;
@property (copy, nonatomic) NSNumber *currentTarget;
@property (copy, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
