@interface PASmartBlackAndWhiteAutoSettings : IPAAutoSettings

@property (nonatomic) double inputBlackAndWhite;
@property (nonatomic) double offsetStrength;
@property (nonatomic) double offsetNeutralGamma;
@property (nonatomic) double offsetTone;

- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
