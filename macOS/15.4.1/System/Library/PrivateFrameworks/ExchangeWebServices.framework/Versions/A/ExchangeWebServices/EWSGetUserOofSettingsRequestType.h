@class EWSEmailAddress;

@interface EWSGetUserOofSettingsRequestType : EWSBaseRequestType

@property (retain, nonatomic) EWSEmailAddress *Mailbox;

+ (id)definition;

- (void).cxx_destruct;

@end
