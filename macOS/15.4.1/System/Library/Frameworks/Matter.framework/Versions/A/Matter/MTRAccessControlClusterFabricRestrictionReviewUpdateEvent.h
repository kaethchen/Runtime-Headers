@class NSNumber, NSString;

@interface MTRAccessControlClusterFabricRestrictionReviewUpdateEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *token;
@property (copy, nonatomic) NSString *instruction;
@property (copy, nonatomic) NSString *arlRequestFlowUrl;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
