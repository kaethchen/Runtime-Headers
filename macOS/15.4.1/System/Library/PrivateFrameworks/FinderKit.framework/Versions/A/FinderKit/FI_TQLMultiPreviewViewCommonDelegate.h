@class NSString;

@interface FI_TQLMultiPreviewViewCommonDelegate : NSObject <QLPreviewViewDelegate>

@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } browserTargetNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)createMultiPreviewView:(id)a0 forPreviewItem:(id)a1;
- (id)findMultiPreviewViewInPreviewView:(id)a0;
- (BOOL)isAllowedToDragNodes:(const void *)a0;
- (id)newPasteboardWriterForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 inPreviewView:(id)a1;
- (BOOL)previewView:(id)a0 acceptDrop:(id)a1 onPreviewItem:(id)a2;
- (id)previewView:(id)a0 draggingItemsForPreviewItem:(id)a1;
- (id)previewView:(id)a0 pasteboardWriterForPreviewItem:(id)a1;
- (unsigned long long)previewView:(id)a0 validateDrop:(id)a1 onPreviewItem:(id)a2;

@end
