@protocol NTTodayModuleContentRequest, FCReadablePrivateDataStorage, FCContentContext;

@interface NTTodayModuleDescriptorsOperation : FCOperation

@property (copy, nonatomic) id<NTTodayModuleContentRequest> contentRequest;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (nonatomic) BOOL requireRefreshedAppConfig;
@property (retain, nonatomic) id<FCReadablePrivateDataStorage> privateDataStorage;
@property (copy, nonatomic) id /* block */ descriptorsCompletion;

- (id)init;
- (void).cxx_destruct;

@end
