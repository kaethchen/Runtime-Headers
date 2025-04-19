@class NSArray;

@interface CSKStreamDataBatch : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *entities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendEntitiesFromBatch:(id)a0;
- (void)appendEntitiesFromBatch:(id)a0 filteredUsingFilters:(id)a1;
- (void)appendEntitiesFromBatch:(id)a0 filteredUsingFilters:(id)a1 observer:(id)a2;
- (id)filteredEntitiesUsingFilters:(id)a0;
- (id)filteredEntitiesUsingFilters:(id)a0 observer:(id)a1;
- (BOOL)isEqualToDataBatch:(id)a0;

@end
