@class EMObjectID;

@interface MUIMessageListOnboardingTipDataSource : MessageListSectionDataSource {
    EMObjectID *_itemIdentifier;
}

@property (nonatomic) long long selectedBucket;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 bucket:(long long)a1;

@end
