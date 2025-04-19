@class NSURL, NSNumber, NSString;

@interface MSUPackageReference : PKPackageReference

@property (readonly) NSURL *integrityDataURL;
@property (readonly) NSNumber *integrityDataSize;
@property (readonly) NSString *integrityDigest;
@property (readonly) NSString *tocDigestChecksum;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0 baseURL:(id)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1 version:(id)a2 fileSize:(unsigned long long)a3 fileDigest:(id)a4 fileDigestType:(long long)a5 integrityDataURL:(id)a6 integrityDataSize:(id)a7 integrityDigest:(id)a8 tocDigestChecksum:(id)a9;

@end
