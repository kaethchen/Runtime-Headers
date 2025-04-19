@class NSNumber;

@interface MTRTimeSynchronizationClusterTrustedTimeSourceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
