@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {
    _MSPQueryState *_editedState;
    MSPContainer *_container;
    NSString *_context;
}

- (void).cxx_destruct;
- (id)_initWithSource:(id)a0;
- (void)_didChangeSourceWithNewState:(id)a0 context:(id)a1 inContainer:(id)a2;
- (void)_performEditWithStateTransformation:(id /* block */)a0 containerEdit:(id /* block */)a1;
- (id)_visibleState;
- (void)deleteContentsObjectAtIndex:(unsigned long long)a0;
- (void)deleteContentsObjectAtIndexes:(id)a0;
- (void)moveContentsObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;

@end
