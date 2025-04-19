@interface MPiTunesLibraryEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;

- (id)identifiersForLibraryItem:(id)a0;
- (void)mapIdentifierCreationBlock:(id /* block */)a0;
- (void)mapPropertyKey:(id)a0 toValueTransformer:(id /* block */)a1;
- (void)mapPropertyKey:(id)a0 toiTunesLibraryItemProperty:(id)a1;
- (void)mapPropertyKey:(id)a0 valueTransformerFunction:(void /* function */ *)a1;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1;
- (id)objectForPropertySet:(id)a0 libraryItem:(id)a1 context:(id)a2;

@end
