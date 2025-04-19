@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (id)triggeringBundleIdentifiers;

@end
