@interface EXSEWSMoveFolderOperation : EXSEWSOperation

+ (id)log;

- (id)initWithProtocol:(id)a0;
- (id)distinguishedMessageRootFolderID;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
