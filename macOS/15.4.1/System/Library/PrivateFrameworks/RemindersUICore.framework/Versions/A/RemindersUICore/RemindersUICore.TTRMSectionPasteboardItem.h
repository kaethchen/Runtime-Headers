@interface RemindersUICore.TTRMSectionPasteboardItem : NSObject <NSPasteboardReading, NSPasteboardWriting, NSSecureCoding> {
    void /* unknown type, empty encoding */ objectID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)readableTypesForPasteboard:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
