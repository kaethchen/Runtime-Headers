@class NSString;

@interface WDProtocolType : NSObject {
    long long _baseType;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) SEL factoryMethod;
@property (readonly, nonatomic) BOOL isEnum;

+ (id)typeFromPayload:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToType:(id)a0;
- (id)decodedInstanceFromPayload:(id)a0;
- (struct Ref<WTF::JSONImpl::Value, WTF::RawPtrTraits<WTF::JSONImpl::Value>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Value>> { struct Value *x0; })encodedValueForInstance:(id)a0;
- (id)initWithName:(id)a0 factoryMethod:(SEL)a1 baseType:(long long)a2;
- (id)initWithName:(id)a0 factoryMethod:(SEL)a1 baseType:(long long)a2 isEnum:(BOOL)a3;
- (BOOL)instanceIsValid:(id)a0;

@end
