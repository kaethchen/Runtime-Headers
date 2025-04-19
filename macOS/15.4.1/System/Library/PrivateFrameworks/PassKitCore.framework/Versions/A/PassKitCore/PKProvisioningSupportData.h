@class NSDictionary, NSString;

@interface PKProvisioningSupportData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *encryptedSupportDataDictionary;
@property (retain, nonatomic) NSString *sid;
@property (readonly, nonatomic) unsigned long long supportDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)archiveForKeychainWithError:(id *)a0;
- (id)initWithEncryptedSupportDataDictionary:(id)a0 sid:(id)a1;

@end
