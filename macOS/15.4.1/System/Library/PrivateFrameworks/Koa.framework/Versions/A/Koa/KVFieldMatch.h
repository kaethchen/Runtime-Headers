@class SEMFieldMatch;

@interface KVFieldMatch : NSObject <NSCopying>

@property (readonly, nonatomic) SEMFieldMatch *fieldMatch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)fieldType;
- (id)fieldSpanValue;
- (id)fieldSpanInfo;
- (id)initWithFieldMatch:(id)a0;
- (BOOL)isEqualToFieldMatch:(id)a0;
- (BOOL)isLabelMatch;
- (BOOL)isValueMatch;

@end
