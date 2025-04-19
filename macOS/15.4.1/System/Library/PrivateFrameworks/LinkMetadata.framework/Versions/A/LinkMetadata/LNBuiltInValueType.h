@interface LNBuiltInValueType : LNValueType

@property (class, readonly, nonatomic) LNBuiltInValueType *intentToggleOperationValueType;
@property (class, readonly, nonatomic) LNBuiltInValueType *intentToggleStateValueType;
@property (class, readonly, nonatomic) LNBuiltInValueType *photoItemCollectionValueType;

@property (readonly, nonatomic) long long builtInType;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;
+ (id)supportedClassesByTypeIdentifier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)objectClass;
- (id)initWithBuiltInType:(long long)a0;
- (id)typeIdentifierAsString;

@end
