@class NSString;
@protocol GDVisualIdentifierView;

@interface QPECRClient : NSObject <QPECRClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _viewLock;
    id<GDVisualIdentifierView> _view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (id)visualIdentifierViewWithError:(id *)a0;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (void)clearVisualIdentifierView;
- (void)cooldownAsync;
- (void)cooldownSync;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (id)visualIdentifiersWithQuery:(id)a0 entityFilterType:(long long)a1 error:(id *)a2;
- (id)visualIdentifiersWithText:(id)a0 allowPrefixSearch:(BOOL)a1 entityFilterType:(long long)a2 includeInferredNames:(BOOL)a3 allowGroundingToNamesAndEmails:(BOOL)a4 useNamesAndEmailsForNonRelations:(BOOL)a5 error:(id *)a6;
- (void)warmUpAsync;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;
- (void)warmUpSync;

@end
