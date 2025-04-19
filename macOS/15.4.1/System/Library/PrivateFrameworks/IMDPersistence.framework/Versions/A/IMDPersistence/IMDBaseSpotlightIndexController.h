@class NSString;
@protocol IMDBaseSpotlightIndexControllerDelegate;

@interface IMDBaseSpotlightIndexController : CSIndexExtensionRequestHandler <CSSearchableIndexDelegate_Private>

@property (weak, nonatomic) id<IMDBaseSpotlightIndexControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataForSearchableIndex:(id)a0 itemIdentifier:(id)a1 typeIdentifier:(id)a2 error:(out id *)a3;
- (id)fileURLForSearchableIndex:(id)a0 itemIdentifier:(id)a1 typeIdentifier:(id)a2 inPlace:(BOOL)a3 error:(out id *)a4;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (id)fileURLForSearchableIndex:(id)a0 itemIdentifier:(id)a1 typeIdentifier:(id)a2 inPlace:(BOOL)a3 allowDownload:(BOOL)a4 error:(out id *)a5;
- (id)fileURLForSearchableIndex:(id)a0 itemIdentifier:(id)a1 typeIdentifier:(id)a2 options:(long long)a3 error:(out id *)a4;
- (id)fileURLsForSearchableIndex:(id)a0 itemIdentifiers:(id)a1 typeIdentifier:(id)a2 options:(long long)a3 error:(out id *)a4;
- (void)searchableItemsDidUpdate:(id)a0 mask:(long long)a1;
- (id)_createErrorFromSyncError:(id)a0;
- (id)errorAnalyzer;
- (id)fileURLForSearchableIndex:(id)a0 itemIdentifier:(id)a1 typeIdentifier:(id)a2 allowDownload:(BOOL)a3 error:(out id *)a4;

@end
