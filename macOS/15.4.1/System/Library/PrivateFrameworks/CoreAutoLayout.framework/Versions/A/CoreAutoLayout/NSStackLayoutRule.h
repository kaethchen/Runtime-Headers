@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSArray *stackedRects;
@property (readonly) double spacing;
@property (readonly) long long orientation;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)verticalStackWithRects:(id)a0 spacing:(double)a1;
+ (id)horizontalStackWithRects:(id)a0 spacing:(double)a1;
+ (id)stackWithOrientation:(long long)a0 stackedRects:(id)a1 spacing:(double)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)makeChildRules;

@end
