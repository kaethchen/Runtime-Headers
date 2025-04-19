@class NSURL, NSString, NSIndexPath;

@interface PXPeopleBootstrapPreviewItem : NSObject <QLPreviewItem>

@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 title:(id)a1 indexPath:(id)a2;

@end
