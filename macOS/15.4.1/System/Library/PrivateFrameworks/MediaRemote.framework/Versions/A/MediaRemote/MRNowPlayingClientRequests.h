@class NSArray, MRPlayerPath, MRClient, NSMutableArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    MRClient *_clientProperties;
    NSMutableArray *_playerClients;
    NSMutableArray *_clientPropertiesCompletions;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRClient *client;
@property (copy, nonatomic) MRClient *clientProperties;
@property (readonly, nonatomic) NSArray *nowPlayingClients;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)a0;
- (void)handleClientPropertiesRequestWithCompletion:(id /* block */)a0;
- (id)initWithPlayerPath:(id)a0;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)a0;
- (void)removePlayer:(id)a0;
- (void)restoreNowPlayingClientState;

@end
