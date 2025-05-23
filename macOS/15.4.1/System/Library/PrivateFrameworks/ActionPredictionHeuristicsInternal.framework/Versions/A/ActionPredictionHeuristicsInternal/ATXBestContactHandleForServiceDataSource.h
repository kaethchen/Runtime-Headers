@class NSString, ATXHeuristicDevice, _PASLock;

@interface ATXBestContactHandleForServiceDataSource : NSObject <IDSIDQueryControllerDelegate> {
    ATXHeuristicDevice *_device;
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (id)_getBestGuessFromRankedHandle:(id)a0 forService:(id)a1;
- (void)allHandlesForContact:(id)a0 callback:(id /* block */)a1;
- (void)bestHandleForContact:(id)a0 service:(id)a1 callback:(id /* block */)a2;

@end
