@class NSString;

@interface SHMediaLibraryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *identityToken;
@property (readonly) long long status;
@property (readonly) BOOL isEncrypted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 encrypted:(BOOL)a1;

@end
