@class NSString, NSData, NEKeychainItem;

@interface NEVPNIKEv2PPKConfiguration : NSObject <NSSecureCoding, NEConfigurationValidating, NEPrettyDescription, NSCopying> {
    NSString *_identifier;
    NEKeychainItem *_keychainItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSData *keychainReference;
@property BOOL isMandatory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 keychainReference:(id)a1;

@end
