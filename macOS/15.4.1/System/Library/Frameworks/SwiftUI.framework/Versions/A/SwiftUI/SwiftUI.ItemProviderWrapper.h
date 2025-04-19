@interface SwiftUI.ItemProviderWrapper : NSObject <NSPasteboardWriting> {
    void /* unknown type, empty encoding */ itemProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
