@class NSDate;

@interface HDCloudSyncShardPredicate : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)codablePredicate;
- (id)initForShardType:(int)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithCodableShardPredicate:(id)a0;

@end
