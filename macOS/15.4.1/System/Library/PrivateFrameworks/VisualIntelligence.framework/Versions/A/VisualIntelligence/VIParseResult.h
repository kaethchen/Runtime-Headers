@class VIVisualUnderstanding;

@interface VIParseResult : NSObject <NSCopying>

@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVisualUnderstanding:(id)a0;

@end
