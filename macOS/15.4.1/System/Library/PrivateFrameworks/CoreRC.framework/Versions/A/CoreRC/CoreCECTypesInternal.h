@class NSSet, NSArray;

@interface CoreCECTypesInternal : NSObject {
    NSArray *deckControlConstants;
    NSArray *deckControlStrings;
    NSArray *deckInfoConstants;
    NSArray *deckInfoStrings;
    NSArray *deviceTypesConstants;
    NSArray *deviceTypesStrings;
    NSArray *playModeConstants;
    NSArray *playModeStrings;
    NSArray *requestTypeConstants;
    NSArray *requestTypeStrings;
    NSArray *systemAudioModeStatusConstants;
    NSArray *systemAudioModeStatusStrings;
    NSArray *activationStatusConstants;
    NSArray *activationStatusStrings;
}

@property (readonly, nonatomic) NSSet *rcProfileClasses;

+ (id)defaultTypes;

- (void)dealloc;
- (id)init;
- (id)stringForRequestType:(unsigned long long)a0;
- (unsigned long long)deckControlModeForString:(id)a0;
- (unsigned long long)deckInfoForString:(id)a0;
- (unsigned long long)deviceTypeForString:(id)a0;
- (unsigned long long)playModeForString:(id)a0;
- (unsigned long long)requestTypeForString:(id)a0;
- (id)stringForActivationStatus:(unsigned long long)a0;
- (id)stringForDeckControlMode:(unsigned long long)a0;
- (id)stringForDeckInfo:(unsigned long long)a0;
- (id)stringForDeviceType:(unsigned long long)a0;
- (id)stringForPlayMode:(unsigned long long)a0;
- (id)stringForSystemAudioStatus:(unsigned long long)a0;
- (unsigned long long)systemAudioStatusForString:(id)a0;

@end
