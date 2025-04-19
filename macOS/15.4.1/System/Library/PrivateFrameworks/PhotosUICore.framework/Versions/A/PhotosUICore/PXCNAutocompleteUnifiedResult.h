@class NSArray, NSString, CNContact, NSDictionary, PXCNAutocompleteResultRecipient;

@interface PXCNAutocompleteUnifiedResult : NSObject

@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) PXCNAutocompleteResultRecipient *primaryRecipient;
@property (readonly, nonatomic) NSArray *secondaryRecipients;
@property (readonly, nonatomic) NSDictionary *allRecipients;
@property (readonly, nonatomic) NSArray *phoneAddresses;
@property (readonly, nonatomic) NSArray *emailAddresses;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)initWithResults:(id)a0;
- (BOOL)updatePrimaryRecipientIfNeeded;

@end
