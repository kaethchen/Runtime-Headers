@interface MSDeleteTriageAction : MSTriageAction

- (BOOL)isUndoSupported;
- (id)_changeAction;

@end
