@class NSString, EWSEmailAddressType, EWSContactItemType;

@interface EWSResolutionType : EWSResponseMessageType <XSDefinitionProvider>

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;
@property (retain, nonatomic) EWSContactItemType *Contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
