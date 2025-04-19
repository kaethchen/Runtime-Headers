@class EWSEmailAddressType;

@interface EWSExpandDLType : EWSBaseRequestType

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
