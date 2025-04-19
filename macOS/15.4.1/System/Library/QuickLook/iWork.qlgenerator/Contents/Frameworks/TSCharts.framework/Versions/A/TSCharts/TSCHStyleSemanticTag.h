@interface TSCHStyleSemanticTag : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL isSeries;
@property (readonly, nonatomic) BOOL isReferenceLine;
@property (readonly, nonatomic) Class styleClass;

+ (id)styleSemanticTagWithType:(int)a0 index:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)styleClass;
- (BOOL)isSeries;
- (BOOL)isReferenceLine;
- (id)initWithType:(int)a0 index:(unsigned long long)a1;

@end
