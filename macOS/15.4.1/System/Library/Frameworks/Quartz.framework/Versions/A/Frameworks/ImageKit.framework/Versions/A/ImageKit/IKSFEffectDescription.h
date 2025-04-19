@class NSDictionary;

@interface IKSFEffectDescription : NSObject {
    NSDictionary *_description;
}

+ (void)initialize;
+ (void)addEffectWithDictionary:(id)a0;
+ (id)effectDescriptionWithDictionary:(id)a0;
+ (id)effectNamed:(id)a0;
+ (id)effectNames;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)descriptionDictionary;
- (id)initFromDictionary:(id)a0;
- (void)setDescription:(id)a0;
- (id)ciIdentifier;
- (id)ciName;
- (id)defaultValueForParameter:(int)a0;
- (BOOL)invertValueForParameter:(int)a0;
- (BOOL)isInUserDomain;
- (BOOL)isParameterEditable:(int)a0;
- (id)maxValueForParameter:(int)a0;
- (id)minValueForParameter:(int)a0;
- (id)nameForParameter:(int)a0;
- (int)numberOfParameters;
- (id)parameterAtIndex:(int)a0;
- (float)yPosition;

@end
