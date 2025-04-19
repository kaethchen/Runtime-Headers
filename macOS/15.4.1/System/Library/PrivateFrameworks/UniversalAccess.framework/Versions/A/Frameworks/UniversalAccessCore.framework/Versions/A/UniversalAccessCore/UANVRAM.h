@class NSSet;

@interface UANVRAM : NSObject

@property (class, readonly, nonatomic) NSSet *availableLoginWindowFeatures;

@property (nonatomic, getter=_legacyVoiceOverEnabled, setter=_setLegacyVoiceOverEnabled:) BOOL _legacyVoiceOverEnabled;
@property (copy, nonatomic) NSSet *enabledLoginWindowFeatures;

+ (id)shared;
+ (id)_aggregatedNumberForFeatures:(id)a0;
+ (id)_featuresFromAggregatedNumber:(id)a0;

- (id)_boolNSNumberValueForNVRAMKey:(id)a0;
- (id)_intNSNumberValueForNVRAMKey:(id)a0;
- (void)_setBoolValue:(BOOL)a0 forNVRAMKey:(id)a1;
- (void)_setNumberValue:(id)a0 forNVRAMKey:(id)a1;
- (void)_setStringValue:(id)a0 forNVRAMKey:(id)a1;
- (id)_stringForNVRAMKey:(id)a0;
- (void)_updateLegacyVoiceOverEnabledEFI:(BOOL)a0;

@end
