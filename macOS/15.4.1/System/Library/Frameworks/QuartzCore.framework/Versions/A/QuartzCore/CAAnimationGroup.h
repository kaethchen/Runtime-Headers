@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

+ (id)CA_attributes;

- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)setDefaultDuration:(double)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (unsigned int)_propertyFlagsForLayer:(id)a0;

@end
