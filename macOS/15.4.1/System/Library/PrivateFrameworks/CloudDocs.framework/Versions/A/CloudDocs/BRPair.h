@interface BRPair : NSObject <NSCopying>

@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)pairWithLeft:(id)a0 andRight:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
