@class NSString, NSDictionary, NSURL, NSMutableDictionary, NSDate, NSTask;
@protocol SUPredicateInstallControllerDelegate, NSObject;

@interface SUPredicateInstallController : NSObject {
    NSMutableDictionary *_resources;
    id<NSObject, SUPredicateInstallControllerDelegate> _delegate;
    NSDate *_lastCacheRefreshAttempt;
    NSTask *_currentTask;
}

@property (copy) NSString *iconPath;
@property (copy) NSString *title;
@property (copy) NSString *noNetworkTitle;
@property (copy) NSString *noNetworkMessage;
@property (copy) NSString *noServerTitle;
@property (copy) NSString *noServerMessage;
@property (copy) NSString *busyTitle;
@property (copy) NSString *busyMessage;
@property (copy) NSString *notFoundMessage;
@property (copy) NSString *helpAnchor;
@property (copy) NSURL *helpURL;
@property long long legalTextType;
@property BOOL requireLicenseAgreement;
@property (copy) NSDictionary *installedPrintersPlist;

+ (id)_localizedErrorForCode:(int)a0;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_softwareUpdateDidExitWithCode:(id)a0;
- (BOOL)_isSoftwareUpdateRunningWithPID:(id)a0;
- (BOOL)_isUpdateUIAlreadyRunning;
- (id)_optionsFilePath;
- (void)_softwareUpdateDidExit:(id)a0;
- (BOOL)_startSoftwareUpdateWithOptionsFile:(id)a0;
- (id)_writeOptionsFileForPredicate:(id)a0 confirmComplete:(BOOL)a1;
- (long long)countOfCachedProductsMatchingPredicate:(id)a0;
- (BOOL)isCacheCurrent;
- (id)metadataOfCachedProductsMatchingPredicate:(id)a0;
- (BOOL)startUpdateUIWithPredicate:(id)a0 confirmComplete:(BOOL)a1;
- (id)tagsOfCachedProductsMatchingPredicate:(id)a0;

@end
