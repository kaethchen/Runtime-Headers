@class NSMutableArray;

@interface CCRepeatedFieldValue : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *values;

+ (id)new;
+ (id)_new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithMutableArray:(id)a0;

@end
