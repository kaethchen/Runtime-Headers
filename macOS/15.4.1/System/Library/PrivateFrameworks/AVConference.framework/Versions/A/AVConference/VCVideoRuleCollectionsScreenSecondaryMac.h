@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (BOOL)setupRules;

@end
