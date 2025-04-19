@class NSArray, NSString, EWSTargetFolderIdType, EWSItemIdType;

@interface EWSRuleActionsType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *AssignCategories;
@property (retain, nonatomic) EWSTargetFolderIdType *CopyToFolder;
@property (nonatomic) BOOL Delete;
@property (copy, nonatomic) NSArray *ForwardAsAttachmentToRecipients;
@property (copy, nonatomic) NSArray *ForwardToRecipients;
@property (nonatomic) long long MarkImportance;
@property (nonatomic) BOOL MarkAsRead;
@property (retain, nonatomic) EWSTargetFolderIdType *MoveToFolder;
@property (nonatomic) BOOL PermanentDelete;
@property (copy, nonatomic) NSArray *RedirectToRecipients;
@property (copy, nonatomic) NSArray *SendSMSAlertToRecipients;
@property (retain, nonatomic) EWSItemIdType *ServerReplyWithMessage;
@property (nonatomic) BOOL StopProcessingRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
