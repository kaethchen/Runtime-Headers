@class NSString;

@interface PKProvisioningJPKISupportData : PKProvisioningSupportData

@property (readonly, retain, nonatomic) NSString *pin;
@property (readonly, retain, nonatomic) NSString *password;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)_decryptEncryptedSupportDataDictionary:(id)a0 withGroupIdentifier:(id)a1 sid:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (unsigned long long)supportDataType;
- (BOOL)decryptEncryptedSupportDataForPass:(id)a0;
- (id)initByUnarchivingData:(id)a0 ofType:(unsigned long long)a1 forPass:(id)a2;
- (id)initWithEncryptedSupportDataDictionary:(id)a0 sid:(id)a1;
- (id)initWithPIN:(id)a0 password:(id)a1 type:(unsigned long long)a2 sid:(id)a3;

@end
