@class EWSEmailAddressType;

@interface EWSBaseDelegateType : EWSBaseRequestType

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;

+ (id)definition;

- (void).cxx_destruct;

@end
