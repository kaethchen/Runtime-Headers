@class NSString, NSUserActivity, NSURL, VCPSearchContext;

@interface FI_TQLMultiPreviewItem : NSObject <QLPreviewItem, QLPreviewItemPrivate> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
}

@property (readonly, nonatomic) const void *nodes;
@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *launchURL;
@property (readonly) NSUserActivity *launchActivity;
@property (readonly, copy) NSString *launchActivityAppBundleId;
@property (readonly) NSString *previewItemContentType;
@property (readonly) NSString *previewItemLocalizedDescription;
@property (readonly) NSString *previewItemDisplayName;
@property (readonly) NSString *searchableItemUniqueIdentifier;
@property (readonly) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *extensionPath;
@property (readonly, copy) NSString *queryString;
@property (readonly) NSString *searchableItemTitle;
@property (readonly) NSURL *searchableItemURL;
@property (readonly) VCPSearchContext *videoSearchContext;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })urlString;
- (id)initWithNodes:(const void *)a0;
- (struct CGImage { } *)createImageForMaximumSize:(struct CGSize { double x0; double x1; })a0 options:(struct __CFDictionary { } *)a1;

@end
