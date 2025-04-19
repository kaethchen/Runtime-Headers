@class NSDate, NSString, NSSet, PKInstallRequest, NSMutableDictionary, NSDictionary, NSMutableArray, NSNumber;

@interface PKInstallSandbox : NSObject <NSSecureCoding> {
    NSString *_sandboxPath;
    PKInstallRequest *_installRequest;
    NSString *_scriptsPath;
    NSString *_temporaryPath;
    NSNumber *_stagedSize;
    NSDate *_stageDate;
    NSMutableDictionary *_scriptDirsByPackageSpecifier;
    NSMutableDictionary *_bomPathsByPackageSpecifier;
    NSMutableArray *_cleanupPaths;
    NSDictionary *_scriptsAttributes;
    NSDictionary *_temporaryAttributes;
    NSSet *_previousPackageIdentifiersSharingGroupsWithSandbox;
    long long _relevance;
    BOOL _safeToReset;
    BOOL _trustedSystemSandbox;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
