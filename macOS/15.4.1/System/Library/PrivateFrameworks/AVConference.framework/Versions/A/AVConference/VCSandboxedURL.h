@class NSString;

@interface VCSandboxedURL : NSURL <NSCopying, NSSecureCoding> {
    unsigned char _accessType;
    NSString *_urlToken;
    long long _urlTokenHandle;
    BOOL _deserialized;
    BOOL _tokenConsumed;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)deserialize:(id)a0;
+ (id)stringFromAccessType:(unsigned char)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (const char *)extensionClass;
- (id)consumeToken;
- (id)initWithURL:(id)a0 accessType:(unsigned char)a1;
- (BOOL)issueSandboxExtensionForPath:(id)a0;

@end
