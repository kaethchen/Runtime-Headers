@interface SEMCascadeFieldTypeFilter : NSObject <SEMEntityFilter>

@property (readonly, nonatomic) unsigned short fieldType;

+ (id)filterFromKVFieldTypeNumber:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned char)entityType;
- (id)initWithFieldType:(unsigned short)a0 error:(id *)a1;
- (BOOL)isEqualToCascadeFieldTypeFilter:(id)a0;

@end
