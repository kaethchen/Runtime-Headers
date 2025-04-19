@interface AppletTranslationLibrary.ExpressMode : NSObject {
    void /* unknown type, empty encoding */ modulesRequiringSlowPath;
    void /* unknown type, empty encoding */ reservedTCIs;
    void /* unknown type, empty encoding */ internalBuild;
    void /* unknown type, empty encoding */ userDefaults;
}

+ (BOOL)applyAssertionConfiguration:(id)a0 toSecureElement:(id)a1 inSessionWithPassUniqueIDs:(id)a2 hasActivatedApplets:(BOOL *)a3 performActivations:(BOOL)a4 useLegacyBehavior:(BOOL)a5 error:(id *)a6;
+ (BOOL)applyConfiguration:(id)a0 toSecureElement:(id)a1 inSessionWithAID:(id)a2 hasActivatedApplets:(BOOL *)a3 performActivations:(BOOL)a4 useLegacyBehavior:(BOOL)a5 error:(id *)a6;
+ (id)checkCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (id)checkCompatibilityWithPassInformation:(id)a0 useLegacyBehavior:(BOOL)a1 error:(id *)a2;
+ (BOOL)getFastPathWithPassInformation:(id)a0 fastPathOut:(BOOL *)a1 useLegacyBehavior:(BOOL)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
