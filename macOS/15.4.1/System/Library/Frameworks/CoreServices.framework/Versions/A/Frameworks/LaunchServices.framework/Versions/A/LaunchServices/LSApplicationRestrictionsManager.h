@class NSString, NSSet;

@interface LSApplicationRestrictionsManager : NSObject {
    NSString *_systemMode;
    NSSet *_removedSystemApplicationIdentifiers;
}

- (void).cxx_destruct;
- (void)effectiveSettingsChanged;

@end
