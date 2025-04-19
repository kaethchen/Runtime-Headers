@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end
