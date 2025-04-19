@class NSString, NSOperationQueue, NSLocale, AFDictationConnection;
@protocol SFSpeechRecognizerDelegate, NSObject;

@interface SFSpeechRecognizer : NSObject <AFDictationDelegate> {
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    id<NSObject> _preferencesObserver;
}

@property (readonly, nonatomic, getter=_isAvailableForForcedOfflineRecognition) BOOL _availableForForcedOfflineRecognition;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL supportsOnDeviceRecognition;
@property (weak, nonatomic) id<SFSpeechRecognizerDelegate> delegate;
@property (nonatomic) long long defaultTaskHint;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (long long)authorizationStatus;
+ (id)supportedLocales;
+ (void)requestAuthorization:(id /* block */)a0;
+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(id /* block */)a0;

- (void)_objc_initiateDealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)_dealloc;
- (void)dictationConnnectionDidChangeAvailability:(id)a0;
- (id)recognitionTaskWithRequest:(id)a0 delegate:(id)a1;
- (void)_prepareToRecognizeWithTaskHint:(long long)a0 completion:(id /* block */)a1;
- (void)_prepareToRecognizeWithTaskHint:(long long)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_requestOfflineDictationSupportForClientIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_requestOfflineDictationSupportWithCompletion:(id /* block */)a0;
- (id)recognitionTaskWithRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
