@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)mediaType;
- (id)initWithSourceDefinitions:(id)a0;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
