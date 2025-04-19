@interface EXSEWSUpdateFolderOperation : EXSEWSOperation

+ (id)log;

- (id)initWithProtocol:(id)a0;
- (id)_buildFolderSettersForChangeItem:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
