@interface IMPair : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1;

@end
