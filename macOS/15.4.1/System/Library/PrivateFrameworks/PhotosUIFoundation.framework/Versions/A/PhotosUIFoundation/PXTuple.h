@class NSArray;

@interface PXTuple : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *objects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;

@end
