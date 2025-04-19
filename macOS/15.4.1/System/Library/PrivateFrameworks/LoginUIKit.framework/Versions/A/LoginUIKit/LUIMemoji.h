@interface LUIMemoji : NSObject

+ (id)LUIMemojiDescriptorAdultMale;
+ (id)LUIMemojiDescriptorRandom;
+ (id)LUIStickerConfigurationForAvatarDescriptor:(id)a0;
+ (id)LUIMemojiDescriptorAdultFemale;
+ (id)LUIMemojiDescriptorChildFemale;
+ (id)LUIPoseForAvatarDescriptor:(id)a0;
+ (void)_addColorPresetForCategory:(long long)a0 named:(id)a1 toMemoji:(id)a2;
+ (void)_addPresetForCategory:(long long)a0 named:(id)a1 toMemoji:(id)a2;
+ (void)_addRandomPresetForCategory:(long long)a0 toMemoji:(id)a1;

@end
