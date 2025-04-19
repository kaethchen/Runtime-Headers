@class NSString, ECEmailAddress, NSArray, NSDictionary, NSSet, NSMutableDictionary;

@interface MSInputContextHistory : NSObject <EFPubliclyDescribable>

@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) ECEmailAddress *senderEmailAddress;
@property (retain, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSArray *ccRecipients;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) BOOL hasCustomSignature;
@property (nonatomic) BOOL showSmartReplySuggestions;
@property (copy, nonatomic) NSString *originalMessageCategorySubtype;
@property (retain, nonatomic) NSArray *originalContentMessages;
@property (retain, nonatomic) NSDictionary *toRecipientNamesByEmailAddress;
@property (retain, nonatomic) NSDictionary *ccRecipientNamesByEmailAddress;
@property (retain, nonatomic) NSDictionary *recipientNamesByEmailAddress;
@property (retain, nonatomic) NSSet *firstPerson;
@property (retain, nonatomic) NSSet *primaryRecipients;
@property (retain, nonatomic) NSSet *secondaryRecipients;
@property (retain, nonatomic) NSDictionary *infoDict;
@property (retain, nonatomic) NSMutableDictionary *participantsByEmailAddress;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_participantNameAndEmailAddressFromEmailAddress:(id)a0;
- (id)_participantNamesByEmailAddressFromRecipients:(id)a0;
- (id)initWithThreadIdentifier:(id)a0 senderEmailAddress:(id)a1 toRecipients:(id)a2 ccRecipients:(id)a3 subject:(id)a4 hasCustomSignature:(BOOL)a5 showSmartReplySuggestions:(BOOL)a6 originalMessageCategorySubtype:(id)a7 originalContentMessages:(id)a8;

@end
