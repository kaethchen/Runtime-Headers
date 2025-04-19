@class PKInk;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKInk *ink;

+ (BOOL)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;
+ (id)_toolWithInk:(id)a0 configuration:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithInk:(id)a0;
- (BOOL)_isEraserTool;
- (BOOL)_isHandwritingTool;
- (BOOL)_isLassoTool;
- (BOOL)_isRulerTool;

@end
