@class NSString, BSObjCValue, NSDictionary, BSObjCMethod;

@interface BSObjCProperty : NSObject <BSDescriptionProviding> {
    NSString *_customGetter;
    NSString *_customSetter;
    NSDictionary *_customAttributes;
    BOOL _nonatomic;
    BOOL _readonly;
    BOOL _copy;
    BOOL _strong;
    BOOL _weak;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic) BSObjCValue *value;
@property (readonly, nonatomic) BSObjCMethod *getter;
@property (readonly, nonatomic) BSObjCMethod *setter;
@property (readonly, nonatomic, getter=isAtomic) BOOL atomic;
@property (readonly, nonatomic, getter=isNonAtomic) BOOL nonAtomic;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic, getter=isReadWrite) BOOL readWrite;
@property (readonly, nonatomic, getter=isAssign) BOOL assign;
@property (readonly, nonatomic, getter=isCopy) BOOL copy;
@property (readonly, nonatomic, getter=isStrong) BOOL strong;
@property (readonly, nonatomic, getter=isWeak) BOOL weak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyWithBuilder:(id /* block */)a0;
+ (id)propertyWithBuilder:(id /* block */)a0 error:(out id *)a1;
+ (id)propertyWithName:(id)a0 attributes:(id)a1 error:(out id *)a2;
+ (id)propertyWithProperty:(struct objc_property { } *)a0 error:(out id *)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyAsReadWrite;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyAddingCustomAttributes:(id)a0;
- (id)customAttributeForKey:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
