@class NSArray, NSDictionary, RBSProcessIdentity, NSString;
@protocol _EXExtensionRepresenting;

@interface _EXHostConfiguration : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ interruptionHandler;
    void /* unknown type, empty encoding */ preferredLanguages;
    void /* unknown type, empty encoding */ additionalEnvironmentVariables;
    void /* unknown type, empty encoding */ sandboxProfileName;
    void /* unknown type, empty encoding */ assertionAttributes;
    void /* unknown type, empty encoding */ networkApplicationID;
}

@property (nonatomic, readonly) RBSProcessIdentity *rbsProcessIdentity;
@property (nonatomic, retain) id<_EXExtensionRepresenting> extension;
@property (nonatomic, retain) void /* unknown type, empty encoding */ extensionIdentity;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ instanceIdentifier;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, copy) NSString *sandboxProfileName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ launchPersona;
@property (nonatomic, copy) NSArray *assertionAttributes;
@property (nonatomic) void /* unknown type, empty encoding */ requireInvalidation;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithExtension:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;

@end
