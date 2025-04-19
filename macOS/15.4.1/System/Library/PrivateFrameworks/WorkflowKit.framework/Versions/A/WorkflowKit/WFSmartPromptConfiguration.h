@class NSString, WFContentCollection, NSData, NSArray, WFDeletionAuthorizationState, WFWorkflowReference;

@interface WFSmartPromptConfiguration : WFWorkflowAuthorizationConfiguration

@property (readonly, copy, nonatomic) NSData *archivedSourceContentCollection;
@property (readonly, nonatomic) WFContentCollection *cachedSourceContentCollection;
@property (readonly, copy, nonatomic) NSString *requestType;
@property (readonly, copy, nonatomic) NSString *requestSource;
@property (readonly, copy, nonatomic) NSString *actionUUID;
@property (readonly, copy, nonatomic) NSArray *smartPromptStates;
@property (readonly, copy, nonatomic) WFDeletionAuthorizationState *deletionAuthorizationState;
@property (readonly, nonatomic) WFWorkflowReference *workflowReference;
@property (readonly, copy, nonatomic) NSString *workflowName;
@property (readonly, nonatomic) BOOL isSpecialRequest;
@property (readonly, copy, nonatomic) NSString *localizedPrompt;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)authorizationDialogRequestWithAttribution:(id)a0;
- (BOOL)containsPrivatePreviews;
- (id)initWithDeletionAuthorizationState:(id)a0 contentCollection:(id)a1 action:(id)a2 reference:(id)a3 source:(id)a4;
- (id)initWithOutputContentCollection:(id)a0 reference:(id)a1 source:(id)a2;
- (id)initWithSmartPromptStates:(id)a0 attributionSet:(id)a1 previousAttributions:(id)a2 contentItemCache:(id)a3 action:(id)a4 contentDestination:(id)a5 reference:(id)a6 workflowName:(id)a7 source:(id)a8 isWebpageCoercion:(BOOL)a9;

@end
