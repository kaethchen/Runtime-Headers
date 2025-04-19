@class NSArray;

@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSItemProviderReading, NSItemProviderWriting, NSPasteboardReading, NSPasteboardWriting, NSSecureCoding> {
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ storages;
    void /* unknown type, empty encoding */ titles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, nonatomic, readonly) NSArray *readableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)readableTypesForPasteboard:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
