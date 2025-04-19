@class NSError, NSString, NSDate, NSLock, PKDistributionContainer, NSArray, NSDictionary, NSData, NSNumber;
@protocol PKPackageSource;

@interface MSUProduct : PKProduct

@property (retain, nonatomic) NSLock *distributionEvaluationLock;
@property (retain) PKDistributionContainer *_distributionContainer;
@property (retain) id<PKPackageSource> _createdContentLocatorPackageSource;
@property (readonly) NSString *key;
@property (getter=isStaged) BOOL staged;
@property (retain) NSDate *postDate;
@property (retain) NSString *buildVersion;
@property (retain) NSString *updateVersion;
@property (retain) NSString *updateType;
@property (retain) NSString *stagedPrefix;
@property (retain) NSString *stagedSuffix;
@property long long criticalUpdateType;
@property double criticalUpdateAutoInstallDelay;
@property (retain) NSDictionary *extendedMetaInfoDictionary;
@property (readonly) NSDictionary *distributionURLsByLocalization;
@property (retain) NSArray *packages;
@property (getter=isEvaluated) BOOL evaluated;
@property (getter=isInstallable) BOOL installable;
@property (retain) NSError *eligibilityError;
@property (retain) NSString *displayName;
@property (retain) NSNumber *displaySizeBytes;
@property (retain) NSString *displayVersion;
@property (retain) NSData *displayDescriptionData;
@property (retain) NSString *displayDescriptionMIMEType;
@property BOOL visibleOnlyForPredicate;
@property (readonly) id<PKPackageSource> contentLocatorPackageSource;

- (id)description;
- (void).cxx_destruct;
- (id)distribution;
- (id)allPackageReferences;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)distributionContainer;
- (id)stringsDictionary;
- (id)initWithProductKey:(id)a0 dictionaryRepresentation:(id)a1 error:(id *)a2;

@end
