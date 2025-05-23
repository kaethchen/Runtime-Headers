@class NSString;

@interface LNPrimitiveValueType : LNValueType

@property (class, readonly, nonatomic) LNPrimitiveValueType *stringValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *attributedStringValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *boolValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *intValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int8ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int16ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int32ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *int64ValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *doubleValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *dateValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *dateComponentsValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *placemarkValueType;
@property (class, readonly, nonatomic) LNPrimitiveValueType *URLValueType;

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
