@class NSString;

@interface NSVB_ProxyObject : NSObject <NSCoding> {
    NSString *proxiedObjectIdentifier;
}

+ (void)addMappings:(id)a0 forCoder:(id)a1;
+ (void)removeMappingsForCoder:(id)a0;
+ (void)addMappingFromIdentifier:(id)a0 toObject:(id)a1 forCoder:(id)a2;
+ (id)mappedObjectForCoder:(id)a0 withIdentifier:(id)a1;
+ (struct __CFDictionary { } *)proxyDecodingMap;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(id)a0;

@end
