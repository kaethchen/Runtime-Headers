@class NSString, EWSEmailAddressType;

@interface EWSDistinguishedFolderIdType : EWSBaseFolderIdType <XSDefinitionProvider>

@property (nonatomic) long long Id;
@property (copy, nonatomic) NSString *ChangeKey;
@property (retain, nonatomic) EWSEmailAddressType *Mailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
