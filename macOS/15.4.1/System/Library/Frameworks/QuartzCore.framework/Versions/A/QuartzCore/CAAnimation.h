@class CAStateControllerTransition, NSString, CAMediaTimingFunction;
@protocol CAAnimationDelegate;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) CAStateControllerTransition *CAStateControllerTransition;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *beginTimeMode;
@property double frameInterval;
@property long long preferredFramesPerSecond;
@property unsigned int highFrameRateReason;
@property BOOL discretizesTime;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (retain) id<CAAnimationDelegate> delegate;
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property (copy) NSString *fillMode;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)animation;
+ (id)defaultValueForKey:(id)a0;
+ (id)properties;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)a0 type:(int)a1;
+ (void /* function */ *)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned short x1 : 16; unsigned short x2 : 16; SEL x3[2]; struct __CFString *x4; } *)a0;
+ (void /* function */ *)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned short x1 : 16; unsigned short x2 : 16; SEL x3[2]; struct __CFString *x4; } *)a0;
+ (id)attributesForKey:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)setDefaultDuration:(double)a0;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (id)attributesForKeyPath:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)isCompleteForTime:(double)a0;
- (float)preferredFrameRateRangeMaximum;
- (float)preferredFrameRateRangeMinimum;
- (float)preferredFrameRateRangePreferred;
- (BOOL)removedOnCompletion;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void)setPreferredFrameRateRangeMaximum:(float)a0;
- (void)setPreferredFrameRateRangeMinimum:(float)a0;
- (void)setPreferredFrameRateRangePreferred:(float)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;

@end
