@interface EXSEWSUpdateItemOperation : EXSEWSOperation

- (id)initWithProtocol:(id)a0;
- (id)_buildItemSettersForChangeItem:(id)a0;
- (id)_buildItemSettersForNoteChangeItem:(id)a0;
- (id)_buildItemSettersForTaskChangeItem:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)setterTypeForChangeItem:(id)a0;

@end
