@class NSString, NSArray, NSUUID;

@interface DNDSModeRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) unsigned long long symbolDescriptorTintStyle;
@property (readonly, copy, nonatomic) NSArray *symbolDescriptorTintColorNames;
@property (readonly, copy, nonatomic) NSString *symbolDescriptorImageName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) long long semanticType;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *placeholderExcludedPlatforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;
- (id)_initWithSymbolImageName:(id)a0 tintColorName:(id)a1 symbolDescriptorTintStyle:(unsigned long long)a2 symbolDescriptorTintColorNames:(id)a3 symbolDescriptorImageName:(id)a4 name:(id)a5 modeIdentifier:(id)a6 semanticType:(long long)a7 visibility:(unsigned long long)a8 identifier:(id)a9 placeholderExcludedPlatforms:(id)a10;
- (id)dictionaryRepresentationWithContext:(id)a0;

@end
