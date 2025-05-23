@class NSString, NSArray, Protocol;

@interface BSObjCProtocol : NSObject <NSCopying, BSDescriptionProviding> {
    NSArray *_inheritedProtocols;
    BOOL _virtual;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) NSArray *inheritedProtocols;
@property (readonly, copy, nonatomic) NSArray *methods;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolForProtocol:(id)a0;
+ (id)protocolForProtocol:(id)a0 interpreter:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)flattenWithIgnoredInheritedProtocols:(id)a0;
- (id)inheritedProtocolForProtocol:(id)a0;
- (id)propertyWithName:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
