@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (id)description;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;

@end
