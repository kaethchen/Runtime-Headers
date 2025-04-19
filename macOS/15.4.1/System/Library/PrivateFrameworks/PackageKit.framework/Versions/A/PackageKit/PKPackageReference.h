@class NSDictionary, NSString, NSURL;

@interface PKPackageReference : NSObject <NSSecureCoding, NSCopying, PKPackageReferable> {
    NSDictionary *_dictionary;
    NSURL *_baseURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *MD5;
@property (readonly) NSString *fileDigest;
@property (readonly) long long fileDigestType;
@property (readonly) NSDictionary *additionalInfo;
@property (readonly) NSString *digest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 baseURL:(id)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1 version:(id)a2 fileSize:(unsigned long long)a3 fileDigest:(id)a4 fileDigestType:(long long)a5;
- (id)initWithURL:(id)a0 identifier:(id)a1 version:(id)a2 fileSize:(unsigned long long)a3 fileDigest:(id)a4 fileDigestType:(long long)a5 additionalInfo:(id)a6;
- (id)initWithURL:(id)a0 identifier:(id)a1 version:(id)a2 fileSize:(unsigned long long)a3 MD5:(id)a4;
- (id)initWithURL:(id)a0 identifier:(id)a1 version:(id)a2 fileSize:(unsigned long long)a3 MD5:(id)a4 digest:(id)a5;

@end
