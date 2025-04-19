@class FSVolumeIdentifier, FSFileName, NSObject;
@protocol OS_dispatch_queue;

@interface FSVolume : NSObject {
    NSObject<OS_dispatch_queue> *_renameWorkQueue;
}

@property (retain) FSVolumeIdentifier *volumeID;
@property (copy) FSFileName *name;
@property (nonatomic) long long state;
@property (nonatomic) BOOL wasTerminated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renameWorkQueue;
@property (retain) FSVolumeIdentifier *volumeID;
@property (nonatomic) long long state;
@property (nonatomic) BOOL wasTerminated;
@property (copy) FSFileName *name;

+ (id)volumeIdentifierDescription:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithVolumeID:(id)a0 volumeName:(id)a1;

@end
