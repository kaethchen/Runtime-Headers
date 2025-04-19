@class NSString;

@interface LNSearchCriteriaValueType : LNValueType

@property (class, readonly, nonatomic) LNSearchCriteriaValueType *stringValueType;

@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)supportedClassesByTypeIdentifier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIdentifier:(long long)a0;
- (Class)objectClass;

@end
