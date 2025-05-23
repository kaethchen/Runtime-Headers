@class NSString, PXMediaProvider;
@protocol PXFeedPlaceholderFactory, PXFeedItemLayoutFactory, PXFeedActionPerformer;

@interface PXFeedConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ dataSourceManagerPromise;
@property (copy, nonatomic) id /* block */ specManagerPromise;
@property (copy, nonatomic) id /* block */ chromeControllerPromise;
@property (retain, nonatomic) id<PXFeedItemLayoutFactory> itemLayoutFactory;
@property (retain, nonatomic) id<PXFeedPlaceholderFactory> placeholderFactory;
@property (retain, nonatomic) id<PXFeedActionPerformer> actionPerformer;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) BOOL shouldEmbedContentLayout;
@property (copy, nonatomic) id /* block */ visibleRectChangeObserver;
@property (readonly, nonatomic) NSString *viewControllerTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) BOOL hidesBackButton;
@property (readonly, nonatomic) BOOL wantsEmbeddedScrollView;
@property (readonly, nonatomic) BOOL allowsPopOnEmptyBehavior;
@property (readonly, nonatomic) long long selectionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dataSourceManager;
- (void)handleContentDismissed;
- (void)handleContentSeen;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)objectReferenceForDestination:(id)a0;
- (id)specManagerWithExtendedTraitCollection:(id)a0;

@end
