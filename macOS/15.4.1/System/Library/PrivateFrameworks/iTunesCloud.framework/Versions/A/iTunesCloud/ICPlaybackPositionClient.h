@class NSString, NSXPCConnection, NSObject, ICCloudServerListenerEndpointProvider;
@protocol OS_dispatch_queue;

@interface ICPlaybackPositionClient : NSObject <ICPlaybackPositionService> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_connection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (void)deletePlaybackPositionEntities;
- (void)deletePlaybackPositionEntitiesFromLibraryWithIdentifier:(id)a0;
- (void)deletePlaybackPositionEntity:(id)a0;
- (void)getLocalPlaybackPositionForEntityIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)getLocalPlaybackPositionForEntityIdentifiers:(id)a0 forDomain:(id)a1 fromLibraryWithIdentifier:(id)a2 completionBlock:(id /* block */)a3;
- (void)persistPlaybackPositionEntity:(id)a0 isCheckpoint:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)pullPlaybackPositionEntity:(id)a0 completionBlock:(id /* block */)a1;
- (void)pushPlaybackPositionEntity:(id)a0 completionBlock:(id /* block */)a1;
- (void)synchronizePlaybackPositions;
- (void)synchronizePlaybackPositionsForLibraryWithIdentifier:(id)a0 forDomain:(id)a1 isCheckpoint:(BOOL)a2;
- (void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)a0;

@end
