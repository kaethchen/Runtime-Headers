@interface ASTConnectionSession : ASTMaterializedConnection

- (void)_addTokenToHeaderField;
- (id)initWithIdentities:(id)a0 ticket:(id)a1 requestQueuedSuiteInfo:(BOOL)a2;

@end
