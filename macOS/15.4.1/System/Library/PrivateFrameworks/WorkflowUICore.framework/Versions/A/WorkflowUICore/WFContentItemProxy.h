@class NSString, WFFileType, NSURL, WFFileRepresentation, WFContentItem;

@interface WFContentItemProxy : NSObject <QLPreviewItem>

@property (weak, nonatomic) WFContentItem *item;
@property (weak, nonatomic) WFContentItem *originalItem;
@property (retain, nonatomic) WFFileType *preferredFileType;
@property (retain, nonatomic) WFFileRepresentation *file;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewRetrievalQueue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
