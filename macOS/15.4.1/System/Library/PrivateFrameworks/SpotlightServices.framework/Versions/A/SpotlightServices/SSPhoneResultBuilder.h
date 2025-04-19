@class NSArray, NSString, NSURL, NSDate;

@interface SSPhoneResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *recipientContactIdentifiers;
@property (retain, nonatomic) NSArray *senderContactIdentifiers;
@property (retain, nonatomic) NSURL *callbackURL;
@property (retain, nonatomic) NSString *callSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSDate *callDate;
@property (retain, nonatomic) NSString *voicemailTranscription;
@property (retain, nonatomic) NSString *callOrigin;
@property (nonatomic) BOOL isMissedCall;
@property (nonatomic) BOOL isOutgoingCall;
@property (nonatomic) BOOL isVideoCall;
@property (nonatomic) BOOL isVoicemail;

- (void).cxx_destruct;

@end
