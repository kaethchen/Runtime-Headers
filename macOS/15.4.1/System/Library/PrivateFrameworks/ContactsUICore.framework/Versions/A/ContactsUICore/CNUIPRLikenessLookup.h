@class CNContactStore, NSString, CNUIMeContactMonitor;
@protocol CNSchedulerProvider, CNUIPRLikenessProvider, CNUIPlaceholderProviderFactory;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>

@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic) unsigned long long lookupOptions;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderLikeness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)basicMonogramForContactFuture:(id)a0 monogramColor:(id)a1;
+ (id)basicMonogramFromString:(id)a0 color:(id)a1;
+ (id)basicMonogramObservableForContactFuture:(id)a0 monogramColor:(id)a1;
+ (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
+ (id)contactFuture:(id)a0 contactStore:(id)a1 personaId:(id)a2 scheduler:(id)a3 refetchContact:(BOOL)a4;
+ (id)contactFuture:(id)a0 contactStore:(id)a1 refetchContact:(BOOL)a2;
+ (id)observableFromLikenessProviderBlock:(id /* block */)a0 withScheduler:(id)a1;
+ (id)photoObservableWithPhotoFuture:(id)a0 likenessFingerprint:(id)a1 scheduler:(id)a2;
+ (id)photoWithPhotoFuture:(id)a0 likenessFingerprint:(id)a1;
+ (BOOL)useGivenAvatarForContact:(id)a0;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1;
- (id)blessedPhotoWithFuture:(id)a0 contact:(id)a1;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1;
- (id)photoImageDataForContact:(id)a0 error:(id *)a1;
- (id)badgeObservableWithLikenessBadge:(id)a0 workScheduler:(id)a1;
- (id)badgeWithLikenessBadge:(id)a0;
- (id)basicMonogramFromString:(id)a0 color:(id)a1;
- (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
- (id)basicMonogramObservableWithContactFuture:(id)a0 monogramColor:(id)a1;
- (id)basicMonogramWithContactFuture:(id)a0 monogramColor:(id)a1;
- (id)blessedPhotoObservableWithFuture:(id)a0 contact:(id)a1 workScheduler:(id)a2;
- (id)contentObservableForContact:(id)a0 placeholderProviderFactory:(id)a1 options:(id)a2 workScheduler:(id)a3;
- (id)futureResultForPhotoImageDataForContact:(id)a0 error:(id *)a1;
- (id)futureResultForPhotoImageDataForMeContact:(id)a0 error:(id *)a1;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1 meMonitor:(id)a2;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1 meMonitor:(id)a2;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1 meMonitor:(id)a2 personaId:(id)a3;
- (id)initWithPersonaId:(id)a0 schedulerProvider:(id)a1;
- (BOOL)isMeContact:(id)a0;
- (id)likenessForContact:(id)a0 error:(id *)a1;
- (id)likenessForContact:(id)a0 options:(id)a1 error:(id *)a2;
- (id)likenessForContact:(id)a0 placeholderProviderFactory:(id)a1 options:(id)a2;
- (id)likenessObservableForContact:(id)a0 placeholderProviderFactory:(id)a1 options:(id)a2 workScheduler:(id)a3;
- (id)likenessesForContact:(id)a0 options:(id)a1 workScheduler:(id)a2;
- (id)likenessesForContact:(id)a0 workScheduler:(id)a1;
- (id)likenessesForContacts:(id)a0 options:(id)a1 error:(id)a2;
- (id)loadingPlaceholderObservableWithPlaceholderProviderFactory:(id)a0;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)a0;
- (BOOL)mayIncludeSource:(long long)a0;
- (id)photoFutureForContactFuture:(id)a0 photoFuture:(id)a1 allowingFallbackForMeCard:(BOOL)a2;
- (id)photoFutureForContactFuture:(id)a0 scheduler:(id)a1;
- (id)remoteImageWithContactFuture:(id)a0;
- (id)remoteImagesObservableWithContactFuture:(id)a0 workScheduler:(id)a1;
- (id)resolveLikenessesForContacts:(id)a0 workScheduler:(id)a1 withContentHandler:(id /* block */)a2;
- (BOOL)shouldFetchSharedPhotoForContact:(id)a0;
- (id)silhouetteObservableWithPlaceholderProviderFactory:(id)a0 contact:(id)a1 workScheduler:(id)a2;
- (id)silhouetteWithPlaceholderProviderFactory:(id)a0 contact:(id)a1;
- (BOOL)skipContactLookup;

@end
