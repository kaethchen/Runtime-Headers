@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSLayoutPoint *firstLayoutPoint;
@property (readonly, copy) NSLayoutPoint *secondLayoutPoint;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)makeChildRules;

@end
