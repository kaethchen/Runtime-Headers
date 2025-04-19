@class NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol, CRKFeatureFlags;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

@property (readonly, nonatomic) id<CRKFeatureFlags> featureFlags;

+ (id)defaultSourcesByTypeWithStudentDaemonProxy:(id)a0;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)fetchConfiguration;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 sourcesByType:(id)a1;

@end
