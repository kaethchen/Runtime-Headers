@class NSArray, EWSRulePredicateDateRangeType, NSString, EWSRulePredicateSizeRangeType;

@interface EWSRulePredicatesType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *Categories;
@property (copy, nonatomic) NSArray *ContainsBodyStrings;
@property (copy, nonatomic) NSArray *ContainsHeaderStrings;
@property (copy, nonatomic) NSArray *ContainsRecipientStrings;
@property (copy, nonatomic) NSArray *ContainsSenderStrings;
@property (copy, nonatomic) NSArray *ContainsSubjectOrBodyStrings;
@property (copy, nonatomic) NSArray *ContainsSubjectStrings;
@property (nonatomic) long long FlaggedForAction;
@property (copy, nonatomic) NSArray *FromAddresses;
@property (copy, nonatomic) NSArray *FromConnectedAccounts;
@property (nonatomic) BOOL HasAttachments;
@property (nonatomic) BOOL HasAttachmentsSpecified;
@property (nonatomic) long long Importance;
@property (nonatomic) BOOL IsApprovalRequest;
@property (nonatomic) BOOL IsApprovalRequestSpecified;
@property (nonatomic) BOOL IsAutomaticForward;
@property (nonatomic) BOOL IsAutomaticForwardSpecified;
@property (nonatomic) BOOL IsAutomaticReply;
@property (nonatomic) BOOL IsAutomaticReplySpecified;
@property (nonatomic) BOOL IsEncrypted;
@property (nonatomic) BOOL IsEncryptedSpecified;
@property (nonatomic) BOOL IsMeetingRequest;
@property (nonatomic) BOOL IsMeetingRequestSpecified;
@property (nonatomic) BOOL IsMeetingResponse;
@property (nonatomic) BOOL IsMeetingResponseSpecified;
@property (nonatomic) BOOL IsNDR;
@property (nonatomic) BOOL IsNDRSpecified;
@property (nonatomic) BOOL IsPermissionControlled;
@property (nonatomic) BOOL IsPermissionControlledSpecified;
@property (nonatomic) BOOL IsReadReceipt;
@property (nonatomic) BOOL IsReadReceiptSpecified;
@property (nonatomic) BOOL IsSigned;
@property (nonatomic) BOOL IsSignedSpecified;
@property (nonatomic) BOOL IsVoicemail;
@property (nonatomic) BOOL IsVoicemailSpecified;
@property (copy, nonatomic) NSArray *ItemClasses;
@property (copy, nonatomic) NSArray *MessageClassifications;
@property (nonatomic) BOOL NotSentToMe;
@property (nonatomic) BOOL NotSentToMeSpecified;
@property (nonatomic) BOOL SentCcMe;
@property (nonatomic) BOOL SentCcMeSpecified;
@property (nonatomic) BOOL SentOnlyToMe;
@property (nonatomic) BOOL SentOnlyToMeSpecified;
@property (copy, nonatomic) NSArray *SentToAddresses;
@property (nonatomic) BOOL SentToMe;
@property (nonatomic) BOOL SentToMeSpecified;
@property (nonatomic) BOOL SentToOrCcMe;
@property (nonatomic) BOOL SentToOrCcMeSpecified;
@property (nonatomic) long long Sensitivity;
@property (retain, nonatomic) EWSRulePredicateDateRangeType *WithinDateRange;
@property (retain, nonatomic) EWSRulePredicateSizeRangeType *WithinSizeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
