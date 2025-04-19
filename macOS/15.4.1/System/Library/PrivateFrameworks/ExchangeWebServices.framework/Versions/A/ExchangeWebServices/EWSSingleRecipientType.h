@class NSString, EWSEmailAddressType;

@interface EWSSingleRecipientType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
