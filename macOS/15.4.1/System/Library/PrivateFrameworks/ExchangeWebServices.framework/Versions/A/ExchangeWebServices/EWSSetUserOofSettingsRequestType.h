@class EWSEmailAddress, EWSUserOofSettingsType;

@interface EWSSetUserOofSettingsRequestType : EWSBaseRequestType

@property (retain, nonatomic) EWSEmailAddress *Mailbox;
@property (retain, nonatomic) EWSUserOofSettingsType *UserOofSettings;

+ (id)definition;

- (void).cxx_destruct;

@end
