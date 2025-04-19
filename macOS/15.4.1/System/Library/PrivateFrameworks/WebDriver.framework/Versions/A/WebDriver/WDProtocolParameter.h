@class NSString, WDProtocolType;

@interface WDProtocolParameter : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WDProtocolType *type;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, nonatomic, getter=isArray) BOOL array;

+ (id)parameterFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToParameter:(id)a0;
- (id)decodedInstanceFromPayload:(id)a0;
- (struct Ref<WTF::JSONImpl::Value, WTF::RawPtrTraits<WTF::JSONImpl::Value>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Value>> { struct Value *x0; })encodedValueForInstance:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 isOptional:(BOOL)a2 isArray:(BOOL)a3;
- (BOOL)instanceIsValid:(id)a0;

@end
