@class NSString, NSImage;

@interface OneTimeCodeUIAppearanceInformation : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSImage *image;

+ (id)_fetchInformationForOneTimeCode:(id)a0 formURL:(id)a1 context:(long long)a2;
+ (id)_keyIcon;
+ (id)_mailIcon;
+ (id)_messagesIcon;
+ (id)_subtitleStringForOneTimeCodeFromMessages:(id)a0 formURL:(id)a1;
+ (id)appearanceInformationForCode:(id)a0 formURL:(id)a1 context:(long long)a2;

- (void).cxx_destruct;

@end
