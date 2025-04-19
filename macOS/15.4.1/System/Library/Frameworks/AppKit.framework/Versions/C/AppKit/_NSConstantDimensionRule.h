@class NSArray, NSString;

@interface _NSConstantDimensionRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSArray *dimensions;
@property (readonly) double constant;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithConstant:(double)a0 dimensions:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithConstant:(double)a0 dimensions:(id)a1;
- (id)makeChildRules;

@end
