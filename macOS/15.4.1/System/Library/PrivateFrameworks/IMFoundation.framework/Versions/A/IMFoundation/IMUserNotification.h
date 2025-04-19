@class NSDictionary, NSString;

@interface IMUserNotification : NSObject {
    id _reserved;
}

@property (readonly, retain, nonatomic) id identifier;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long displayFlags;
@property (readonly, retain, nonatomic) NSDictionary *displayInformation;
@property (nonatomic) BOOL showInLockScreen;
@property (nonatomic) BOOL requireUserInteraction;
@property (nonatomic) BOOL usesNotificationCenter;
@property (retain, nonatomic) NSString *representedApplicationBundle;
@property (readonly, nonatomic) unsigned long long response;
@property (readonly, nonatomic) unsigned long long responseFlags;
@property (readonly, retain, nonatomic) NSDictionary *responseInformation;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)userNotificationWithIdentifier:(id)a0 timeout:(double)a1 alertLevel:(unsigned long long)a2 displayFlags:(unsigned long long)a3 displayInformation:(id)a4;
+ (id)userNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButton:(id)a3 alternateButton:(id)a4 otherButton:(id)a5;
+ (id)userNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButton:(id)a3 defaultButtonStyle:(unsigned long long)a4 alternateButton:(id)a5 alternateButtonStyle:(unsigned long long)a6 otherButton:(id)a7 otherButtonStyle:(unsigned long long)a8;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 timeout:(double)a1 displayFlags:(unsigned long long)a2 displayInformation:(id)a3;
- (void)_setResponseFlags:(unsigned long long)a0 responseInformation:(id)a1;

@end
