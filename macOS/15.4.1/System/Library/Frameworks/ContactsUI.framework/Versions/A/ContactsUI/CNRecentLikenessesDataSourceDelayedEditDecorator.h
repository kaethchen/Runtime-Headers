@class CNReplaySubject, CNContact, CNCreateLikenessHelper, CNObservable, NSString, CNUIMeContactMonitor, CNContactLikenessesModel;
@protocol CNContactCardViewControllerLogger, CNRecentLikenessesDataSource, CNCancelable;

@interface CNRecentLikenessesDataSourceDelayedEditDecorator : NSObject <CNRecentLikenessesDataSource>

@property (retain, nonatomic) id<CNRecentLikenessesDataSource> dataSource;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) CNCreateLikenessHelper *createLikenessHelper;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactLikenessesModel *contactLikenessModelFromDataSource;
@property (retain, nonatomic) CNContactLikenessesModel *contactLikenessModelToSendToObserver;
@property (retain, nonatomic) CNReplaySubject *contactLikenessModelReplaySubject;
@property (retain, nonatomic) CNObservable *dataSourceContactLikenessModelObservable;
@property (retain, nonatomic) id<CNCancelable> dataSourceContactLikenessModelToken;
@property (nonatomic) BOOL forwardingLikenessesToObserverDisabled;
@property (retain, nonatomic) id<CNContactCardViewControllerLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)commitEditing;
- (void)addNewLikeness:(id)a0;
- (id)currentLikeness;
- (void)deleteLikeness:(id)a0;
- (void)updateLikeness:(id)a0;
- (void)clearState;
- (id)contactLikenessModelObservable;
- (void)didReceiveContactLikenessModelFromDataSource:(id)a0;
- (id)initWithRecentLikenessesDataSource:(id)a0 meMonitor:(id)a1 createLikenessHelper:(id)a2;
- (void)sendContactLikenessesModelToObserver;
- (void)sendCurrentLikenessToObserverIfNecessary;
- (void)setAsCurrentLikeness:(id)a0;
- (void)setLikenessMutatorFactory:(id)a0;

@end
