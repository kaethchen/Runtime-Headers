@class _LTTranslationSession, NSString, _LTLanguageAvailability, NSArray, NSMutableDictionary, NSLocale, _LTTranslator, NSObject, _LTPreflightChecker, NSMutableSet;
@protocol _LTPreflightLocaleResolving, _LTTextSessionTranslating, _LTTextSessionLocaleProviding, OS_dispatch_queue, _LTTextSessionDelegate;

@interface _LTTextSession : NSObject <_LTPreflightCheckerDelegate, _LTTextSessionTranslating> {
    _LTTranslator *_translator;
    _LTTranslationSession *_translationSession;
    _LTLanguageAvailability *_languageAvailability;
    BOOL _isCancelled;
    NSMutableSet *_ongoingRequestInvocationIDs;
    NSMutableDictionary *_inProgressMultiParagraphRequestByUUID;
    NSArray *_installedAssets;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;

@property (weak, nonatomic) id<_LTTextSessionLocaleProviding> localeProvider;
@property (weak, nonatomic) id<_LTPreflightLocaleResolving> localeResolver;
@property (weak, nonatomic) id<_LTTextSessionTranslating> textTranslator;
@property (readonly, nonatomic) _LTPreflightChecker *preflightChecker;
@property (nonatomic) BOOL allowOnlineTranslation;
@property (readonly, copy, nonatomic) NSLocale *sourceLocale;
@property (readonly, copy, nonatomic) NSLocale *targetLocale;
@property (weak, nonatomic) id<_LTTextSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (void)_invocationCancelledSELFLogging;
- (void)prepareDownloadsWithCompletion:(id /* block */)a0;
- (void)_beginBatchRequest:(id)a0;
- (void)_callDelegateOrGiveError:(id)a0 forConfiguration:(id)a1 completion:(id /* block */)a2;
- (void)_checkDownloadStatusForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_didFinishMultiParagraphRequestWithUUID:(id)a0;
- (void)_invocationStartedSELFLogging:(id)a0;
- (void)_prepareRequest:(id)a0;
- (void)_supportedLocalePairsWithCompletionHandler:(id /* block */)a0;
- (void)_translateRequest:(id)a0 perItemHandler:(id /* block */)a1;
- (BOOL)isTranslationSupportedOnCurrentDeviceForPreflightChecker:(id)a0;
- (void)preflightChecker:(id)a0 continueCheckingFromStep:(long long)a1 forConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)translateBatch:(id)a0 itemHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)translateRequest:(id)a0 forSession:(id)a1 perItemHandler:(id /* block */)a2;
- (void)translateString:(id)a0 completionHandler:(id /* block */)a1;

@end
