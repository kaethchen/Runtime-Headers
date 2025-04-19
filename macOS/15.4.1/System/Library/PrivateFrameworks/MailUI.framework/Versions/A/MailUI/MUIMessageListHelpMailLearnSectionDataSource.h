@class EMObjectID;

@interface MUIMessageListHelpMailLearnSectionDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

- (void).cxx_destruct;
- (void)stopObserving;
- (id)initWithConfiguration:(id)a0;
- (void)_hideHelpMailLearnUntilDate:(id)a0;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;

@end
