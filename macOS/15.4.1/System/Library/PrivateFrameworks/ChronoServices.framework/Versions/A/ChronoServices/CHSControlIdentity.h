@class NSString, CHSExtensionIdentity, CHSIntentReference;

@interface CHSControlIdentity : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding, CHSWidgetIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_loggingIdentifier;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 intent:(id)a2;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 intentReference:(id)a2;

@end
