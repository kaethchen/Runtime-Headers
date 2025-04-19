@class NSDictionary, NSMutableSet;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying>

@property (retain, nonatomic) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (retain, nonatomic) NSMutableSet *objects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addProcess:(id)a0;

@end
