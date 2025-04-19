@class NSDate, MRPlayerPath, NSArray, NSObject, NSMutableArray, MRDeviceInfo, MROrigin, NSNumber;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceInfoLock;
    MRDeviceInfo *_deviceInfo;
    NSMutableArray *_deviceInfoCompletions;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSDate *_lastPlayingDate;
    NSMutableArray *_nowPlayingClients;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    NSMutableArray *_lastPlayingDateCompletions;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *nowPlayingClientRequests;
@property (copy, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSNumber *volumeCapabilities;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSDate *lastPlayingDate;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)removeClient:(id)a0;
- (id)initWithOrigin:(id)a0;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)handleDeviceInfoRequestWithCompletion:(id /* block */)a0;
- (void)handleLastPlayingDateRequestWithCompletion:(id /* block */)a0;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(id /* block */)a0;
- (void)handleVolumeRequestWithCompletion:(id /* block */)a0;
- (id)nowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)removeAllClients;
- (void)restoreNowPlayingClientState;

@end
