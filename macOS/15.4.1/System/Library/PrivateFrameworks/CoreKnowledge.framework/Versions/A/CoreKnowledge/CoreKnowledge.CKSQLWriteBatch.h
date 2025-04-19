@interface CoreKnowledge.CKSQLWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch> {
    void /* unknown type, empty encoding */ queue;
}

- (BOOL)writeAndReturnError:(id *)a0;
- (void)writeWithCompletionHandler:(id /* block */)a0;

@end
