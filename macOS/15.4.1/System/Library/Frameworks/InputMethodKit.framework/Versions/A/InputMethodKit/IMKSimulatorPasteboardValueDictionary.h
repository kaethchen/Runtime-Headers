@class NSMutableDictionary, NSPasteboard;

@interface IMKSimulatorPasteboardValueDictionary : NSObject

@property (nonatomic) unsigned long long changeCount;
@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSPasteboard *pasteboard;

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (void)clearContentsOfPasteboard;
- (id)initWithPasteboardName:(id)a0 defaultValues:(id)a1;
- (void)populateDictionaryInMemory;

@end
