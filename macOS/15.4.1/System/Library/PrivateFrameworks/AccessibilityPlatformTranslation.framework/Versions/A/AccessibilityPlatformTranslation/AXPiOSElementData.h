@interface AXPiOSElementData : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long elementOrHash; unsigned long long elementID; } uid;
@property (nonatomic) int pid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
