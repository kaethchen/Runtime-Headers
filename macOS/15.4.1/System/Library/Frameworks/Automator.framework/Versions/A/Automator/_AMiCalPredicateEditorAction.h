@interface _AMiCalPredicateEditorAction : _AMPredicateEditorAction

- (BOOL)validatePredicate:(id)a0;
- (void)setPerItemTypeInfoWithCalendarsString:(id)a0 eventsString:(id)a1 todosString:(id)a2;
- (void)_runAsynchronouslyOnMainThreadWithInput:(id)a0 itemType:(id)a1 predicate:(id)a2;
- (void)_runAsynchronouslyOnMainThreadWithInput:(id)a0 itemType:(id)a1 predicate:(id)a2 eventStore:(id)a3;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setSelectedInputType:(id)a0;
- (void)setSelectedOutputType:(id)a0;
- (id)translateCalendarStoreIdentifierToEventKit:(id)a0;

@end
