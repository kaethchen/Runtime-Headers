@class NSURL;

@interface MCMContainerSchemaActionCopyContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 destFinalPathArgument:(id)a2 context:(id)a3;
- (BOOL)performWithError:(id *)a0;

@end
