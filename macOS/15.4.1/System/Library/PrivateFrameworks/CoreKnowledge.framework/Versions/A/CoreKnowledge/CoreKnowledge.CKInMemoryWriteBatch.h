@interface CoreKnowledge.CKInMemoryWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>

- (BOOL)writeAndReturnError:(id *)a0;
- (void)writeWithCompletionHandler:(id /* block */)a0;

@end
