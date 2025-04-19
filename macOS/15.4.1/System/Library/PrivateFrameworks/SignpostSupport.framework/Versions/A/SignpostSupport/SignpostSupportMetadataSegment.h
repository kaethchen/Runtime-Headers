@class NSString, NSArray, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject

@property (readonly, nonatomic) BOOL isGenerator;
@property (readonly, nonatomic) unsigned long long scalarType;
@property (readonly, nonatomic) NSString *typeNamespace;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *placeholderTokens;
@property (readonly, nonatomic) NSString *stringPrefix;
@property (readonly, nonatomic) SignpostSupportMessageArgument *argument;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithArgumentObject:(id)a0 scalarType:(unsigned long long)a1 typeNamespace:(id)a2 type:(id)a3 tokens:(id)a4 stringPrefix:(id)a5 privacy:(id)a6;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1 didRedactOut:(BOOL *)a2;
- (unsigned long long)_scalarTypeForArgumentObject:(id)a0 scalarTypeNumber:(id)a1;
- (BOOL)hasPlaceholderToken:(id)a0;
- (BOOL)matchesPlaceholderTokenKey:(id)a0 value:(id)a1;
- (id)placeholderTokensForKey:(id)a0;

@end
