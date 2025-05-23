@class NSString, _PASLazyResult;

@interface ATXHeuristicNowPlaying : NSObject <ATXContextHeuristicProtocol> {
    NSString *_persistenceIdentifier;
    _PASLazyResult *_mediaRemoteNowPlaying;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)permanentRefreshTriggers;
- (id)initWithPersistenceIdentifier:(id)a0;

@end
