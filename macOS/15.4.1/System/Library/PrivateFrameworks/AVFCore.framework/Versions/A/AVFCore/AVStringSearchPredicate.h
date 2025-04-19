@class NSString;

@interface AVStringSearchPredicate : AVSearchPredicate

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long comparisonOptions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 comparisonOptions:(unsigned long long)a1;

@end
