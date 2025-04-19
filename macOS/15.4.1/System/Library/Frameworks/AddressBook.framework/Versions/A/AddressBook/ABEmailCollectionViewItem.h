@class ABCollectionItemMessagingAvailabilityHelper, CNFuture;

@interface ABEmailCollectionViewItem : ABCollectionViewItem <ABCollectionItemMessagingAvailabilityHelperDelegate>

@property (readonly, nonatomic) ABCollectionItemMessagingAvailabilityHelper *messagingHelper;
@property (retain, nonatomic) CNFuture *availabilityFuture;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)didRemoveFromCollection:(id)a0;
- (void)messagingAvailabilityDidChangeHelper:(id)a0;
- (BOOL)shouldShowGlyphButton:(id)a0;
- (BOOL)shouldShowStaticIdentityVerifiedBadge;
- (void)startAvailabilityLookup;
- (void)stopAvailabilityLookup;

@end
