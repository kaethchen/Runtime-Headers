@class NSString, EWSItemIdType;

@interface EWSEmailAddressType : EWSBaseEmailAddressType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Name;
@property (copy, nonatomic) NSString *EmailAddress;
@property (copy, nonatomic) NSString *RoutingType;
@property (nonatomic) long long MailboxType;
@property (retain, nonatomic) EWSItemIdType *ItemId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
