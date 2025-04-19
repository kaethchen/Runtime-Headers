@class NSNumber, MOBoolSettingMetadata;

@interface MOKeyboardSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyDictationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMathSolvingKeyboardMetadata;

@property (retain, nonatomic) NSNumber *denyDictation;
@property (retain, nonatomic) NSNumber *denyMathSolvingKeyboard;

+ (id)groupName;

@end
