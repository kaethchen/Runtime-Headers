@class NSOrderedSet, NSDate;

@interface TVISEvolutionServicePurgeableManifest : NSObject

@property (readonly, copy, nonatomic) NSOrderedSet *maxItems;
@property (readonly, copy, nonatomic) NSOrderedSet *highItems;
@property (readonly, copy, nonatomic) NSOrderedSet *mediumItems;
@property (readonly, copy, nonatomic) NSOrderedSet *lowItems;
@property (readonly, nonatomic) NSDate *lastUpdateDate;

- (id)description;
- (void).cxx_destruct;
- (id)_copy;
- (void)_setPurgeableItems:(id)a0 forUrgency:(long long)a1;
- (id)purgeableItemsForUrgency:(long long)a0;
- (id)purgeableManifestByAddingItems:(id)a0 forUrgency:(long long)a1;
- (id)purgeableManifestByRemovingItems:(id)a0 forUrgency:(long long)a1;

@end
