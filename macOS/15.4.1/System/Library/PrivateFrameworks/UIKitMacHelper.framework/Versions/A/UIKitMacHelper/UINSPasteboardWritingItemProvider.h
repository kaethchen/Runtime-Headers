@class NSString, NSItemProvider;

@interface UINSPasteboardWritingItemProvider : NSObject <NSPasteboardWriting> {
    NSItemProvider *_itemProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
