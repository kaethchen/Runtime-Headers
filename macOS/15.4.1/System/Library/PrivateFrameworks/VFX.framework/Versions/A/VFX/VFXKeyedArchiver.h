@class NSDictionary;

@interface VFXKeyedArchiver : NSKeyedArchiver

@property (nonatomic) BOOL skipMorphTargets;
@property (copy, nonatomic) NSDictionary *options;

+ (id)archivedDataWithRootObject:(id)a0 options:(id)a1;

- (void)dealloc;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;

@end
