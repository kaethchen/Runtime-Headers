@class LNActionMetadata, LNFullyQualifiedActionIdentifier;

@interface WFAppIntentArchiver : NSObject

@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (copy, nonatomic) LNActionMetadata *actionMetadata;

- (void).cxx_destruct;
- (void)archiveAction:(id)a0 completion:(id /* block */)a1;
- (id)archiveAction:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 actionMetadata:(id)a1;
- (id)resolvedActionMetadataWithError:(id *)a0;
- (void)unarchiveActionFromData:(id)a0 completion:(id /* block */)a1;
- (id)unarchiveActionFromData:(id)a0 error:(id *)a1;

@end
