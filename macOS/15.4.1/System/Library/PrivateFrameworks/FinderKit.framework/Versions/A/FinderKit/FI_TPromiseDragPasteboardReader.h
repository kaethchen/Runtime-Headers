@class NSString;

@interface FI_TPromiseDragPasteboardReader : NSObject <NSPasteboardReading>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;

- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;

@end
