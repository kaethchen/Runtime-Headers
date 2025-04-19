@class NSString, NSArray, EWSFolderIdType, EWSEffectiveRightsType, NSDateComponents, EWSMimeContentType, EWSBodyType, EWSItemIdType;

@interface EWSItemType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSMimeContentType *MimeContent;
@property (retain, nonatomic) EWSItemIdType *ItemId;
@property (retain, nonatomic) EWSFolderIdType *ParentFolderId;
@property (copy, nonatomic) NSString *ItemClass;
@property (copy, nonatomic) NSString *Subject;
@property (nonatomic) long long Sensitivity;
@property (retain, nonatomic) EWSBodyType *Body;
@property (copy, nonatomic) NSArray *Attachments;
@property (retain, nonatomic) NSDateComponents *DateTimeReceived;
@property (nonatomic) long long Size;
@property (nonatomic) BOOL SizeSpecified;
@property (copy, nonatomic) NSArray *Categories;
@property (nonatomic) long long Importance;
@property (copy, nonatomic) NSString *InReplyTo;
@property (nonatomic) BOOL IsSubmitted;
@property (nonatomic) BOOL IsSubmittedSpecified;
@property (nonatomic) BOOL IsDraft;
@property (nonatomic) BOOL IsDraftSpecified;
@property (nonatomic) BOOL IsFromMe;
@property (nonatomic) BOOL IsFromMeSpecified;
@property (nonatomic) BOOL IsResend;
@property (nonatomic) BOOL IsResendSpecified;
@property (nonatomic) BOOL IsUnmodified;
@property (nonatomic) BOOL IsUnmodifiedSpecified;
@property (copy, nonatomic) NSArray *InternetMessageHeaders;
@property (retain, nonatomic) NSDateComponents *DateTimeSent;
@property (retain, nonatomic) NSDateComponents *DateTimeCreated;
@property (copy, nonatomic) NSArray *ResponseObjects;
@property (retain, nonatomic) NSDateComponents *ReminderDueBy;
@property (nonatomic) BOOL ReminderIsSet;
@property (nonatomic) BOOL ReminderIsSetSpecified;
@property (nonatomic) long long ReminderMinutesBeforeStart;
@property (nonatomic) BOOL ReminderMinutesBeforeStartSpecified;
@property (copy, nonatomic) NSString *DisplayCc;
@property (copy, nonatomic) NSString *DisplayTo;
@property (nonatomic) BOOL HasAttachments;
@property (nonatomic) BOOL HasAttachmentsSpecified;
@property (copy, nonatomic) NSArray *ExtendedProperty;
@property (copy, nonatomic) NSString *Culture;
@property (copy, nonatomic) NSString *LastModifiedName;
@property (retain, nonatomic) NSDateComponents *LastModifiedTime;
@property (retain, nonatomic) EWSEffectiveRightsType *EffectiveRights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUnindexedFieldURI:(long long)a1;

@end
