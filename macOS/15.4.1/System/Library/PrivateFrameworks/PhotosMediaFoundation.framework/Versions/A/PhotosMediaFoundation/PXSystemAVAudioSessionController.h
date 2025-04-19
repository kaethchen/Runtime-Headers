@class NSString, PXSystemAVResourceReclamationController, NSObject;
@protocol OS_dispatch_queue, OS_os_log, PXAVAudioSession;

@interface PXSystemAVAudioSessionController : NSObject <PXAVResourceReclamationObserver, PXAVAudioSessionController> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _categoryLock;
    long long _category;
    PXSystemAVResourceReclamationController *_reclamationController;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;
@property (class, readonly, nonatomic) PXSystemAVAudioSessionController *applicationAVAudioSessionController;

@property (retain, nonatomic, setter=_audioSessionQueue_setAudioSession:) id<PXAVAudioSession> audioSession;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic) NSString *name;
@property (readonly) long long currentCategory;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)resourceReclamationEventDidOccur:(id)a0;
- (void)setCurrentCategory:(long long)a0;
- (void)_audioSessionQueue_applyCategory:(long long)a0 completion:(id /* block */)a1;
- (void)_audioSessionQueue_applyExistingCategoryToAudioSessionIfNeeded;
- (void)applyCategory:(long long)a0 completion:(id /* block */)a1;
- (id)initWithName:(id)a0 audioSession:(id)a1;

@end
