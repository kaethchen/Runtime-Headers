@class NSArray, NSString;

@interface SwiftUI.SynthesizedListDragPasteboardItem : NSObject <NSPasteboardWriting, NSPasteboardReading, NSItemProviderWriting> {
    void /* unknown type, empty encoding */ indexPath;
}

@property (class, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

@property (nonatomic, readonly) NSString *description;

+ (id)readableTypesForPasteboard:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
