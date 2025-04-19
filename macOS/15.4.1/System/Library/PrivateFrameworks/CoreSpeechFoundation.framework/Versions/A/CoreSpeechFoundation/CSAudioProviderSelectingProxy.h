@class NSString, NSObject;
@protocol CSAudioProviderSelecting, OS_dispatch_queue;

@interface CSAudioProviderSelectingProxy : NSObject <CSAudioProviderSelecting>

@property (retain, nonatomic) id<CSAudioProviderSelecting> audioProviderImplementor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContollerProxy;

- (id)init;
- (void).cxx_destruct;
- (id)audioProviderWithContext:(id)a0 error:(id *)a1;
- (id)audioProviderWithStreamID:(unsigned long long)a0;
- (id)audioProviderWithUUID:(id)a0;
- (void)setAudioProviderImp:(id)a0;

@end
