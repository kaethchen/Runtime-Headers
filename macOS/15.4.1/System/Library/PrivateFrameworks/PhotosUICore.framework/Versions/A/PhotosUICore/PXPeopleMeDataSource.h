@class CNContact, NSString, PHPhotoLibrary, NSObject, PHPerson;
@protocol OS_dispatch_queue;

@interface PXPeopleMeDataSource : NSObject <PXPeopleMeSuggestionHandler>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) PHPerson *suggestedPerson;
@property (retain, nonatomic) CNContact *meContact;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *meContactIsolationQueue;
@property (nonatomic, getter=hasRequestedSuggestedPerson) BOOL requestedSuggestedPerson;
@property (nonatomic, getter=hasRequestedMeContact) BOOL requestedMeContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_assertIsOnFetchQueue;
- (id)_fetchPersonWithUri:(id)a0;
- (void)_fetchQueue_persistSuggestedPersonAsMe;
- (void)_fetchQueue_requestMeContactWithCompletion:(id /* block */)a0;
- (id)_fetchQueue_suggestedPersonForMe;
- (void)confirmSuggestedMePerson;
- (void)rejectSuggestedMePerson;
- (void)requestSuggestedMePersonWithCompletion:(id /* block */)a0;

@end
