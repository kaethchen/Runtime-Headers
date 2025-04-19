@class NSString, LPLinkMetadata, NSItemProvider;

@interface NSPreviewRepresentingActivityItem : NSObject <NSPreviewRepresentableActivityItem> {
    LPLinkMetadata *_linkMetadata;
}

@property (readonly) id item;
@property (readonly, copy) NSString *title;
@property (readonly) NSItemProvider *imageProvider;
@property (readonly) NSItemProvider *iconProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 linkMetadata:(id)a1;
- (id)initWithItem:(id)a0 title:(id)a1 image:(id)a2 icon:(id)a3;
- (id)initWithItem:(id)a0 title:(id)a1 imageProvider:(id)a2 iconProvider:(id)a3;
- (id)linkMetadata;
- (id)representedActivityItem;

@end
