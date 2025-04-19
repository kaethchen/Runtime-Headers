@class LPLinkMetadata, NSString, NSImage, NSURL, WKWebView, NSData;

@interface ActiveWebPageShareItem : NSExtensionItem <SHKShareItem, NSSharingServiceItemSource> {
    LPLinkMetadata *_linkMetadata;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain) NSString *shareItemType;
@property (readonly, retain) NSURL *shareItemURL;
@property (readonly, retain) NSString *shareItemString;
@property (readonly, retain) NSImage *shareItemImage;
@property (readonly, retain) NSData *shareItemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareItemOrURLForWebView:(id)a0 shareURL:(id)a1;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePickerLinkMetadata:(id)a0;
- (id)sharingServicePickerPlaceholderItem:(id)a0;
- (id)initWithURL:(id)a0 webView:(id)a1;

@end
