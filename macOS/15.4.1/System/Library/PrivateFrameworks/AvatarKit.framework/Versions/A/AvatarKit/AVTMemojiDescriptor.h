@class NSString, AVTColorPreset;

@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
    NSString *_presetIdentifiers[40];
    AVTColorPreset *_colorPresets[40][3];
}

+ (BOOL)supportsSecureCoding;
+ (unsigned char)classIdentifier;
+ (id)colorPresetFromColorData:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2 version:(unsigned short)a3 didFail:(BOOL *)a4 error:(id *)a5;
+ (id)presetsDictionaryFromRecipe:(id)a0 didFail:(BOOL *)a1 error:(id *)a2;
+ (id)randomDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)setColorPreset:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2;
- (void)setPresetIdentifier:(id)a0 forCategory:(long long)a1;
- (id)initWithMemoji:(id)a0;
- (void)_decode:(id)a0 isResettingToDefault:(BOOL)a1 error:(id *)a2;
- (void)applyToMemoji:(id)a0;
- (id)colorPresetForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1 isResettingToDefault:(BOOL)a2;
- (id)presetIdentifierForCategory:(long long)a0;

@end
