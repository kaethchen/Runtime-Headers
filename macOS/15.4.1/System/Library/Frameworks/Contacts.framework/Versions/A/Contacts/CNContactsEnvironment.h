@class NSArray, NSURL, CNCDPersistenceStack;
@protocol CNContactsLoggerProvider, CNAccountCollection, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol, CNSchedulerProvider;

@interface CNContactsEnvironment : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *delegateInfos;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNContactsLoggerProvider> loggerProvider;
@property (retain) id<CNAccountCollection> accountCollection;
@property (retain) CNCDPersistenceStack *existingPersistenceStack;
@property (nonatomic, setter=setUseNativeStack:) BOOL shouldUseNativeStack;
@property (readonly, copy) NSURL *baseURL;
@property (retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;
@property (retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
@property (readonly) BOOL useInMemoryStores;

+ (BOOL)supportsSecureCoding;
+ (id)currentEnvironment;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (id)inMemoryURL;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
+ (BOOL)useNativePersistenceStack;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithDelegateInfos:(id)a0;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
- (BOOL)isUITestEnvironment;
- (void)makeCurrentEnvironment;
- (void)retrieveEnvironmentConfigurationFromRemoteProcess;

@end
