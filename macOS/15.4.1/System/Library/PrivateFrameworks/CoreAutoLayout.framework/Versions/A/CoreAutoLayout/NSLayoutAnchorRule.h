@class NSLayoutAnchor, NSString;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSLayoutAnchor *firstAnchor;
@property (readonly, copy) NSLayoutAnchor *secondAnchor;
@property (readonly) long long relation;
@property (readonly) double constant;
@property (readonly) double multiplier;
@property (readonly) float priority;
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
- (id)makeLayoutConstraint;

@end
