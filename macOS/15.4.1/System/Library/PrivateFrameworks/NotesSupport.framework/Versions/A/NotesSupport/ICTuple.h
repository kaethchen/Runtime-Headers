@interface ICTuple : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;

@end
