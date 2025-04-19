@class NSString;

@interface FI_TFENodePasteboardItem : NSObject <NSPasteboardReading, NSPasteboardWriting>

@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)copyURLForType:(id)a0;

@end
