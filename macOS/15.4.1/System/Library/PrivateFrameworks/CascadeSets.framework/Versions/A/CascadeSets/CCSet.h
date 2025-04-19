@class NSString, NSArray, BMAccount, NSNumber;

@interface CCSet : NSObject <BMOPACKCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *uniqueHash;
@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) BMAccount *account;
@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, nonatomic) NSString *personaIdentifier;

+ (id)setEnumerator;
+ (id)setEnumeratorWithUseCase:(id)a0;
+ (id)setFromResourceSpecifier:(id)a0 inContainer:(id)a1 error:(id *)a2;
+ (id)descriptorWithKey:(id)a0 descriptors:(id)a1;
+ (id)serializedSetEnumerator:(id)a0;
+ (id)setFromXPCDictionary:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSet:(id)a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)changePublisher;
- (id)descriptorWithKey:(id)a0;
- (id)changePublisherWithUseCase:(id)a0;
- (BOOL)isInUserVault;
- (id)toXPCDictionary;
- (id)_computeUniqueHash;
- (id)copyWithOptions:(unsigned char)a0 error:(id *)a1;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 descriptors:(id)a2 options:(unsigned char)a3 error:(id *)a4;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 encodedDescriptors:(id)a2 descriptors:(id)a3 options:(unsigned char)a4 error:(id *)a5;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 encodedDescriptors:(id)a2 options:(unsigned char)a3 error:(id *)a4;
- (id)prefixedInstanceIdentifier:(id)a0;
- (id)prefixedSharedIdentifier:(id)a0;
- (id)serializeWithUseCase:(id)a0 enumerateToBookmark:(id)a1 error:(id *)a2;
- (id)serializeWithUseCase:(id)a0 error:(id *)a1;
- (id)toResourceSpecifier;

@end
