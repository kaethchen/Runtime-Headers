@interface BMPruningPolicy : NSObject

@property (nonatomic) BOOL pruneOnAccess;
@property (nonatomic) BOOL filterByAgeOnRead;
@property (nonatomic) double maxAge;
@property (nonatomic) unsigned long long maxStreamSize;
@property (nonatomic) unsigned long long maxEventCount;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initPruneOnAccess:(BOOL)a0 filterByAgeOnRead:(BOOL)a1 maxAge:(double)a2 maxStreamSize:(unsigned long long)a3;
- (id)initPruneOnAccess:(BOOL)a0 filterByAgeOnRead:(BOOL)a1 maxAge:(double)a2 maxStreamSize:(unsigned long long)a3 maxEventCount:(unsigned long long)a4;

@end
