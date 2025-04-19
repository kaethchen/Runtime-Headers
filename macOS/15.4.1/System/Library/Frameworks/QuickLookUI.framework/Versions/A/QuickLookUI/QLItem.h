@class NSString, NSDictionary, NSURL, NSUserActivity, VCPSearchContext;
@protocol QLPreviewItemDataProvider;

@interface QLItem : NSObject <QLPreviewItem, QLPreviewItemPrivate>

@property (copy) NSURL *previewItemURL;
@property (copy) NSString *searchableItemUniqueIdentifier;
@property (copy) NSString *applicationBundleIdentifier;
@property (retain) id<QLPreviewItemDataProvider> dataProvider;
@property (copy) NSString *previewItemContentType;
@property (copy) NSString *previewItemTitle;
@property (copy) NSString *searchableItemTitle;
@property (copy) NSURL *searchableItemURL;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (copy) NSString *queryString;
@property (copy) NSString *extensionPath;
@property (readonly) id shareItem;
@property (retain) NSUserActivity *launchActivity;
@property (copy) NSString *launchActivityAppBundleId;
@property (retain) VCPSearchContext *videoSearchContext;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *launchURL;
@property (readonly) NSString *previewItemLocalizedDescription;
@property (readonly) NSString *previewItemDisplayName;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithSafariSearchableItemUniqueIdentifier:(id)a0 url:(id)a1 title:(id)a2 applicationBundleIdentifier:(id)a3;
- (id)initWithSearchableItemUniqueIdentifier:(id)a0 applicationBundleIdentifier:(id)a1;
- (BOOL)isPreviewable;
- (id)initWithDataProvider:(id)a0 contentType:(id)a1 previewTitle:(id)a2;

@end
