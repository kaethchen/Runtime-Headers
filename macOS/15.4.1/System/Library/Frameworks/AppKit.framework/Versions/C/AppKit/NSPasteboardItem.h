@class NSArray, NSString, NSPasteboard;

@interface NSPasteboardItem : NSObject <_NSPasteboardPromiseProviderAgency, NSPasteboardWriting, NSPasteboardReading> {
    NSPasteboard *_pasteboard;
    unsigned long long _index;
    long long _gen;
    id _auxObject;
}

@property (readonly, copy) NSArray *types;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readableTypesForPasteboard:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)availableTypeFromArray:(id)a0;
- (void)_dataForType:(id)a0 completionHandler:(id /* block */)a1;
- (id)_auxObject;
- (id)_dataProviderForType:(id)a0;
- (unsigned long long)_index;
- (id)_pasteboard;
- (void)_pasteboardPropertyListForType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setPasteboard:(id)a0 index:(unsigned long long)a1 generation:(long long)a2;
- (id)dataForType:(id)a0;
- (void)detectMetadataForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectPatternsForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectValuesForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)propertyListForType:(id)a0;
- (BOOL)setData:(id)a0 forType:(id)a1;
- (BOOL)setDataProvider:(id)a0 forTypes:(id)a1;
- (BOOL)setPropertyList:(id)a0 forType:(id)a1;
- (BOOL)setString:(id)a0 forType:(id)a1;
- (id)stringForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
