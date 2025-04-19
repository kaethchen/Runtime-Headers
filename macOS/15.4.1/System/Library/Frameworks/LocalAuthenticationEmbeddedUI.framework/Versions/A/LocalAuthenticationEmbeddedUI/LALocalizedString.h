@class NSString;

@interface LALocalizedString : NSObject

@property (class, readonly, nonatomic) NSString *ok;
@property (class, readonly, nonatomic) NSString *cancel;
@property (class, readonly, nonatomic) NSString *tryAgain;
@property (class, readonly, nonatomic) NSString *enterPasscode;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericFourDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericSixDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeNumericCustomDigits;
@property (class, readonly, nonatomic) NSString *passcodeTypeAlphanumeric;
@property (class, readonly, nonatomic) NSString *passcodeTypeNone;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryTitle;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryEnabledTitle;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryDisabledTitle;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryOldPasscode;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryFailedTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeOldPasscode;
@property (class, readonly, nonatomic) NSString *passcodeRemovalTitle;
@property (class, readonly, nonatomic) NSString *passcodeRemovalOldPasscode;
@property (class, readonly, nonatomic) NSString *passcodeRemovalFailedTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeNext;
@property (class, readonly, nonatomic) NSString *passcodeChangeDone;
@property (class, readonly, nonatomic) NSString *passcodeChangeNewPasscode;
@property (class, readonly, nonatomic) NSString *passcodeChangeNewPasscodeVerify;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryRecoveryEnabled;
@property (class, readonly, nonatomic) NSString *passcodeRecoveryRecoveryDisabled;
@property (class, readonly, nonatomic) NSString *passcodeChangeOptions;
@property (class, readonly, nonatomic) NSString *passcodeChangeUseDifferentPasscode;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeIsTooEasyTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeIsTooEasyText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeDoesNotMeetRequirementsTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeDoesNotMeetRequirementsInlineText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorPasscodeDoesNotMeetRequirementsText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorNewPasscodeMismatchTitle;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorNewPasscodeMismatchInlineText;
@property (class, readonly, nonatomic) NSString *passcodeChangeErrorNewPasscodeMismatchText;
@property (class, readonly, nonatomic) NSString *passcodeChangeUseAnyway;
@property (class, readonly, nonatomic) NSString *passcodeChangeNotAvailable;
@property (class, readonly, nonatomic) NSString *passcodeChangeFailedTitle;
@property (class, readonly, nonatomic) NSString *passcodeVerificationTitle;
@property (class, readonly, nonatomic) NSString *passcodeVerificationPrompt;

+ (id)passcodeChangeBackoffMessage:(long long)a0;
+ (id)passcodeChangeErrorInvalidPasscodeWithFailedAttemptsCount:(long long)a0;
+ (id)passcodeRemovalNotAllowedTextFaceID;
+ (id)passcodeRemovalNotAllowedTextOpticID;
+ (id)passcodeRemovalNotAllowedTextTouchID;
+ (id)passcodeRemovalNotAllowedTitleFaceID;
+ (id)passcodeRemovalNotAllowedTitleOpticID;
+ (id)passcodeRemovalNotAllowedTitleTouchID;

@end
