@class NSString, CHSControlIdentity;

@interface CHSControlConfigurationItem : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ _uniqueIdentifier;
    void /* unknown type, empty encoding */ _controlIdentity;
    void /* unknown type, empty encoding */ _pushPolicy;
    void /* unknown type, empty encoding */ _canAppearInSecureEnvironment;
    void /* unknown type, empty encoding */ _supportsLowLuminance;
    void /* unknown type, empty encoding */ _supportedColorSchemes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) CHSControlIdentity *controlIdentity;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ location;
@property (nonatomic, readonly) unsigned long long pushPolicy;
@property (nonatomic, readonly) BOOL canAppearInSecureEnvironment;
@property (nonatomic, readonly) BOOL supportsLowLuminance;
@property (nonatomic, readonly) unsigned long long supportedColorSchemes;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1 location:(long long)a2;

@end
