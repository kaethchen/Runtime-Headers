@class NSString, NSData;

@interface NEDNSOverTLSSettings : NEDNSSettings

@property (copy) NSString *serverName;
@property (copy) NSData *identityReference;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (long long)dnsProtocol;
- (id)initFromLegacyDictionary:(id)a0;

@end
