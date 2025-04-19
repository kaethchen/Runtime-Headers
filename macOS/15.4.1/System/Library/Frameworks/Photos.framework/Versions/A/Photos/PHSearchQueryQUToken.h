@class NSDictionary, NSString, NSIndexSet;

@interface PHSearchQueryQUToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long ambiguityType;
@property (readonly, nonatomic) NSIndexSet *entityCategoryTypes;

+ (BOOL)_isSupportedEntityCategoryType:(unsigned long long)a0;
+ (id)_supportedEntityCategoryTypes;
+ (id)entityCategoryTypeKeyForEntityTypeCategory:(unsigned long long)a0;
+ (BOOL)isGenericLocation:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (BOOL)hasMemoryGenAnnotation;
- (id)initWithText:(id)a0 entityCategoryTypes:(id)a1 metadata:(id)a2;
- (id)metadataForCategoryType:(unsigned long long)a0;

@end
