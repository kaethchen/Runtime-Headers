@class TLAlert, TLAlertSystemSoundContext, TLSystemSound;

@interface TLAlertSystemSoundPlayTaskDescriptor : NSObject

@property (readonly, nonatomic) TLAlert *alert;
@property (readonly, nonatomic) TLSystemSound *sound;
@property (readonly, nonatomic, getter=isDeemphasized) BOOL deemphasized;
@property (readonly, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext;

- (void).cxx_destruct;
- (id)initWithAlert:(id)a0 sound:(id)a1 isDeemphasized:(BOOL)a2 alertSystemSoundContext:(id)a3;

@end
