@class NSURL, NSString;

@interface MCMContainerSchemaActionSymlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_linkURL;
    NSURL *_finalLinkURL;
    NSString *_targetPath;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 destFinalPathArgument:(id)a2 context:(id)a3;
- (BOOL)performWithError:(id *)a0;

@end
