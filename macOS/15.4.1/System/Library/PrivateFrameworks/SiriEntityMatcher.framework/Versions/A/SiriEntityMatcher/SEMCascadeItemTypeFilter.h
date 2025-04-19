@interface SEMCascadeItemTypeFilter : NSObject <SEMEntityFilter>

@property (readonly, nonatomic) unsigned short itemType;

+ (id)filterFromKVItemTypeNumber:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned char)entityType;
- (id)initWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)isEqualToCascadeItemTypeFilter:(id)a0;

@end
