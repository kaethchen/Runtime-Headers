@class NSDictionary, NSString, NSArray;

@interface HKOntologyLocalizedEducationContentSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *sectionDataTypeMapping;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, copy, nonatomic) NSString *localizedText;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (readonly, copy, nonatomic) NSArray *validRegionCodes;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, copy, nonatomic) NSArray *citations;
@property (readonly, copy, nonatomic) NSArray *sectionData;

+ (id)sectionByMerging:(id)a0 sectionToMergeFrom:(id)a1 options:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_arrayOfStringOfTypeOrNil:(long long)a0;
- (id)initWithSectionDataTypeMapping:(id)a0 sectionType:(long long)a1;

@end
