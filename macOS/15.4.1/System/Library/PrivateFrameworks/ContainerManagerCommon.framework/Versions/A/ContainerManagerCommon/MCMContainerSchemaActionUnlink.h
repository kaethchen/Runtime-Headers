@class NSURL;

@interface MCMContainerSchemaActionUnlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL *_url;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPathArgument:(id)a0 context:(id)a1;
- (BOOL)performWithError:(id *)a0;

@end
