@class MPCMediaRemoteMiddleware, NSString, NSArray, MPRequest, NSError, MPCFuture, MPSectionedCollection, NSMapTable, NSIndexPath;
@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation>

@property (readonly, nonatomic) MPSectionedCollection *sourceContentItems;
@property (readonly, nonatomic) MPSectionedCollection *modelObjects;
@property (readonly, copy, nonatomic) NSIndexPath *playingIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *request;
@property (retain, nonatomic) MPCFuture *playQueueIdentifiersFuture;
@property (retain, nonatomic) MPCFuture *playingIdentifierFuture;
@property (retain, nonatomic) MPCFuture *queueIdentifierFuture;
@property (retain, nonatomic) MPCFuture *playbackQueueFuture;
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)execute;
- (id)timeoutDescription;
- (id)_genericObjectPropertySetForContentItem:(id)a0 preferredRelationships:(id)a1 propertySet:(id)a2;
- (id)_itemGenericObjectPropertySetForContentItem:(id)a0 propertySet:(id)a1;
- (void)_loadPlaybackQueueWithCompletion:(id /* block */)a0;
- (id)initWithMiddleware:(id)a0 request:(id)a1;
- (struct _MSVSignedRange { long long x0; long long x1; })rangeFromTracklistRange:(struct { long long x0; long long x1; })a0;

@end
