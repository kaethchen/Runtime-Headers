@class NSDictionary, NSSet;

@interface NUCompositionSchema : NUSchema {
    NSSet *_requiredContents;
}

@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSSet *requiredContents;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (long long)type;
- (id)copy:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validateComposition:(id)a0 error:(out id *)a1;
- (BOOL)itemIsResolved:(id)a0;
- (id)copyComposition:(id)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)deserializeComposition:(id)a0 error:(out id *)a1;
- (BOOL)deserializeContents:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)initWithIdentifier:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)modelForProperty:(id)a0;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (id)serializeComposition:(id)a0 error:(out id *)a1;
- (BOOL)serializeContents:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)validateContents:(out id *)a0;
- (BOOL)validateContents:(id)a0 error:(out id *)a1;
- (BOOL)validatePropertyArray:(id)a0 error:(out id *)a1;

@end
