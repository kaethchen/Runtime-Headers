@class NSString, NSMethodSignature;

@interface _NSDPPropertyDescription : NSObject

@property (readonly) struct objc_property { } *property;
@property (readonly) struct NSDPPropertyInfo { SEL x0[3]; struct __CFString *x1; unsigned short x2; unsigned short x3; } *propertyInfo;
@property (readonly) Class implementingClass;
@property (readonly) NSString *name;
@property (readonly, copy) NSString *typeEncoding;
@property (readonly) NSString *dynamicPropertyTypeName;
@property (readonly, getter=isDynamic) BOOL dynamic;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly, getter=isComputed) BOOL computed;
@property (readonly) SEL getterSelector;
@property (readonly) NSMethodSignature *getterSignature;
@property (readonly, copy) NSString *getterSignatureEncoding;
@property (readonly) SEL setterSelector;
@property (readonly) NSMethodSignature *setterSignature;
@property (readonly) NSString *setterSignatureEncoding;

+ (id)propertyDescriptionForPropertyWithName:(id)a0 class:(Class)a1;
+ (id)propertyDescriptionWithProperty:(struct objc_property { } *)a0 class:(Class)a1;

- (void)dealloc;
- (id)description;
- (id)initWithProperty:(struct objc_property { } *)a0 class:(Class)a1;

@end
