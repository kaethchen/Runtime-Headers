@class GCDTimer, NSString, MSPSharedTripContact, NSObject;
@protocol OS_dispatch_queue;

@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject <MSPSharedTripCapabilityLevelFetcherObserver> {
    MSPSharedTripContact *_contact;
    id /* block */ _completion;
    _MSPSharedTripSingleCapabilityLevelFetcher *_keepAliveReference;
    double _timeoutInterval;
    GCDTimer *_timeoutTimer;
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)_timeout;
- (void)_finishWithType:(unsigned long long)a0;
- (void)capabilityLevelFetcher:(id)a0 didUpdateCapabilityLevelsForHandles:(id)a1;
- (id)initWithContact:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
