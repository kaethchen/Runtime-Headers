@class NSNumber;

@interface TGTextGenerationOutputConstraint : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *maxWordCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
