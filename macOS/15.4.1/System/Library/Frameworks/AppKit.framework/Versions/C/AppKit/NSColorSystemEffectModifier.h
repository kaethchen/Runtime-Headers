@class NSString;

@interface NSColorSystemEffectModifier : NSObject <NSDynamicColorModifier> {
    _Atomic id _optionsCache;
}

@property (readonly) long long systemEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modifierForEffect:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)colorByApplyingToColor:(id)a0;
- (id)initWithSystemEffect:(long long)a0;

@end
