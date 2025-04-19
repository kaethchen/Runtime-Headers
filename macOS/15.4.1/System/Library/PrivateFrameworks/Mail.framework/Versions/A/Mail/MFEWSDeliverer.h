@class NSError, MFEWSDeliveryAccount, NSString;

@interface MFEWSDeliverer : MFMessageDeliverer <MFEWSErrorHandler>

@property (retain) NSError *error;
@property (retain, nonatomic) MFEWSDeliveryAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
