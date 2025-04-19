@class PKPassTileValueDate, PKPassTileValueText, PKPassTileValueNumber, PKPassTileValueForeignReference;

@interface PKPassTileValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileValueForeignReference *valueTypeForeignReference;
@property (readonly, nonatomic) PKPassTileValueNumber *valueTypeNumber;
@property (readonly, nonatomic) PKPassTileValueDate *valueTypeDate;
@property (readonly, nonatomic) PKPassTileValueText *valueTypeText;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;

+ (id)_createForDictionary:(id)a0;
+ (id)_createForType:(long long)a0 resolved:(BOOL)a1;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedValueWithBundle:(id)a0 privateBundle:(id)a1;
- (id)displayableStringWithPassState:(id)a0 inContext:(long long)a1;
- (BOOL)isEqualToUnresolvedValue:(id)a0;

@end
