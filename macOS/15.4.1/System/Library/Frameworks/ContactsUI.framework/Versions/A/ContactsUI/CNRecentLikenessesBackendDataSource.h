@class CNContactLikenessesModel, CNContact, NSString, CNObservable, CNReplaySubject;
@protocol CNContactLikenessMutatorFactory, CNContactLikenessesFetchStrategy, CNContactLikenessesFetchStrategyFactory, CNSchedulerProvider, CNCancelable;

@interface CNRecentLikenessesBackendDataSource : NSObject <CNRecentLikenessesDataSource>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNReplaySubject *contactLikenessesModelReplaySubject;
@property (retain, nonatomic) CNObservable *contactLikenessesModelFetchObservable;
@property (retain, nonatomic) CNContactLikenessesModel *contactLikenessModel;
@property (retain, nonatomic) id<CNCancelable> contactLikenessesModelFetchToken;
@property (retain, nonatomic) id<CNContactLikenessesFetchStrategyFactory> likenessFetchStrategyFactory;
@property (retain, nonatomic) id<CNContactLikenessesFetchStrategy> likenessFetchStrategy;
@property (retain, nonatomic) id<CNContactLikenessMutatorFactory> likenessMutatorFactory;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (void)commitEditing;
- (void)addNewLikeness:(id)a0;
- (id)currentLikeness;
- (void)deleteLikeness:(id)a0;
- (void)updateLikeness:(id)a0;
- (void)clearState;
- (id)contactLikenessModelObservable;
- (void)fetchLikenessesForContact:(id)a0;
- (id)initWithLikenessFetchStrategyFactory:(id)a0;
- (id)initWithLikenessFetchStrategyFactory:(id)a0 schedulerProvider:(id)a1;
- (void)setAsCurrentLikeness:(id)a0;

@end
