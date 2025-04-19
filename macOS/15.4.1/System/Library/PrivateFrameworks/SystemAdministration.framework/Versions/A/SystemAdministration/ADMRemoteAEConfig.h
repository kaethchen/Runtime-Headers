@interface ADMRemoteAEConfig : NSObject

+ (id)sharedRemoteAEConfig;

- (BOOL)boolFromCFValueForKey:(struct __CFString { } *)a0;
- (BOOL)hasCompatibleUserPassword;
- (BOOL)isCompatibleUserEnabled;
- (BOOL)isRemoteAppleEventsEnabled;
- (id)passwordDataForString:(id)a0;
- (void)setRemoteAppleEventsEnabled:(BOOL)a0;

@end
