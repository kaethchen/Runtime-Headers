@class TLSystemSound, NSString, TLAlert, TLAlertSystemSoundContext;

@interface TLDeemphasizableAlertSystemSoundBeginPlayingContext : NSObject

@property (readonly, nonatomic) TLAlert *alert;
@property (readonly, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext;
@property (readonly, copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifierForDeemphasizingAlert;
@property (retain, nonatomic) TLSystemSound *sound;

- (void).cxx_destruct;
- (id)initWithAlert:(id)a0 alertSystemSoundContext:(id)a1 toneIdentifierForDeemphasizingAlert:(id)a2;

@end
