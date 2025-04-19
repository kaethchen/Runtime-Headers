@interface CSImportAgentConnection : CSXPCConnection

- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (BOOL)allowClientConnection:(id)a0;
- (BOOL)handleAllExtensions:(id)a0 forConnection:(id)a1;
- (BOOL)handleImport:(id)a0 forConnection:(id)a1;

@end
