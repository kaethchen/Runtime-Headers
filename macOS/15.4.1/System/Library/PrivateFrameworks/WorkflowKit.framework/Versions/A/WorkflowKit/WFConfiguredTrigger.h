@class NSString, NSData, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSData *selectedEntryMetadata;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (readonly, nonatomic) BOOL shouldRecur;
@property (readonly, nonatomic) BOOL editableShortcut;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) int notificationLevel;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 shouldRecur:(BOOL)a5 enabled:(BOOL)a6 editableShortcut:(BOOL)a7 selectedEntryMetadata:(id)a8;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 shouldRecur:(BOOL)a5 enabled:(BOOL)a6 triggerSource:(int)a7 notificationLevel:(int)a8 editableShortcut:(BOOL)a9 selectedEntryMetadata:(id)a10;

@end
