@class NSString, AFInstanceContext;

@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService> {
    AFInstanceContext *_instanceContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)acquireAudioSessionAssertionWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;
- (id)initWithInstanceContext:(id)a0;

@end
