@class NSString, NSDictionary, NSArray;

@interface PFParallaxLayerStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, copy, nonatomic) NSArray *colorSuggestions;

+ (id)serializeParameters:(id)a0;
+ (id)deserializeColorSuggestions:(id)a0 error:(id *)a1;
+ (id)deserializeParameter:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (id)deserializeParameters:(id)a0 error:(id *)a1;
+ (id)dictionaryWithStyle:(id)a0;
+ (BOOL)isSegmentedStyle:(id)a0;
+ (id)serializeColorSuggestions:(id)a0;
+ (id)serializeParameter:(id)a0 forKey:(id)a1;
+ (BOOL)styleKind:(id)a0 supportsParameter:(id)a1;
+ (id)styleWithDictionary:(id)a0 error:(id *)a1;
+ (BOOL)validateParameterKey:(id)a0 value:(id)a1 error:(id *)a2;
+ (BOOL)validateParameters:(id)a0 error:(id *)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(id)a0 parameters:(id)a1 colorSuggestions:(id)a2;
- (BOOL)isEqualToParallaxLayerStyle:(id)a0;

@end
