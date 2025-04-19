@interface SEMOntologyMapper : NSObject

+ (void)_appendSpanProperties:(id)a0 forAppShortcutEntityMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forAppShortcutPhraseMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forContactMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forCustomTermMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forGlobalTermMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forHomeMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forHomeServiceAreaMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forInstalledAppMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forLearnedContactMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forLearnedMediaEntityMatch:(id)a1 entityInfo:(id)a2;
+ (void)_appendSpanProperties:(id)a0 forRadioStationMatch:(id)a1 entityInfo:(id)a2;
+ (id)_entitySpanForCascadeMatch:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2 label:(id)a3;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { char x0; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; id x2; } x0; } x1; } x0; BOOL x1; })_ontologyMappingFromCascadeSpanMatch:(id)a0;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { char x0; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; id x2; } x0; } x1; } x0; BOOL x1; })_ontologyMappingFromFieldType:(unsigned short)a0;
+ (id)_radioStationSignalTypeAsString:(unsigned int)a0;
+ (void)_setIdentifiersOnEdgeNode:(id)a0 entitySpan:(id)a1 spanInfo:(id)a2 probability:(float)a3;
+ (id)ontologyGraphFromSpanMatch:(id)a0;

@end
