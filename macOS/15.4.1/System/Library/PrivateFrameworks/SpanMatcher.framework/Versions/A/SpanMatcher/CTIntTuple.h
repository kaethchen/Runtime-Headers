@interface CTIntTuple : NSObject <NSCopying> {
    long long _CTindex;
    long long _CTdistance;
}

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long distance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIndex:(long long)a0 andDistance:(long long)a1;

@end
