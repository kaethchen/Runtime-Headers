@class NSArray, NSString, EWSSingleRecipientType;

@interface EWSMessageType : EWSItemType <XSRedactionInformation>

@property (retain, nonatomic) EWSSingleRecipientType *Sender;
@property (copy, nonatomic) NSArray *ToRecipients;
@property (copy, nonatomic) NSArray *CcRecipients;
@property (copy, nonatomic) NSArray *BccRecipients;
@property (nonatomic) BOOL IsReadReceiptRequested;
@property (nonatomic) BOOL IsReadReceiptRequestedSpecified;
@property (nonatomic) BOOL IsDeliveryReceiptRequested;
@property (nonatomic) BOOL IsDeliveryReceiptRequestedSpecified;
@property (copy, nonatomic) NSString *ConversationTopic;
@property (retain, nonatomic) EWSSingleRecipientType *From;
@property (copy, nonatomic) NSString *InternetMessageId;
@property (nonatomic) BOOL IsRead;
@property (nonatomic) BOOL IsReadSpecified;
@property (nonatomic) BOOL IsResponseRequested;
@property (nonatomic) BOOL IsResponseRequestedSpecified;
@property (copy, nonatomic) NSString *References;
@property (copy, nonatomic) NSArray *ReplyTo;
@property (retain, nonatomic) EWSSingleRecipientType *ReceivedBy;
@property (retain, nonatomic) EWSSingleRecipientType *ReceivedRepresenting;
@property (readonly, nonatomic) BOOL elementsNeedRedaction;
@property (readonly, copy, nonatomic) NSArray *allowedElementKeys;

+ (id)definition;

- (void).cxx_destruct;

@end
