@class NSString;

@interface FBSSetting : NSObject <FBSMutableSetting_Internal, FBSSetting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    Class _settingsClass;
    BOOL _lock_initialized;
    BOOL _local;
    BOOL _legacy;
    char _type;
    BOOL _isBSSettings;
    BOOL _redacted;
    BOOL _volatile;
    BOOL _propagating;
    BOOL _nullPreserving;
    NSString *_name;
    unsigned long long _setting;
    unsigned long long _legacySetting;
    Class _extension;
    NSString *_extensionID;
    Class _expectedClass;
    long long _specialCollection;
    id _defaultValue;
    id /* block */ _descriptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultValue:(id)a0;
- (void)setDescriptionProvider:(id /* block */)a0;
- (void)setPropagating:(BOOL)a0;
- (void)_finishInitializing;
- (id)indirect_defaultValue;
- (BOOL)indirect_isLegacy;
- (BOOL)indirect_isPropagating;
- (unsigned long long)indirect_legacySetting;
- (id)indirect_name;
- (BOOL)matchesProperty:(SEL)a0;
- (BOOL)matchesPropertyName:(id)a0;
- (void)setNullPreserving:(BOOL)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (void)setVolatile:(BOOL)a0;

@end
