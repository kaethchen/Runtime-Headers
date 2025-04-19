@class NSFileHandle;

@interface MEJSONExporter : NSObject {
    NSFileHandle *mOutputFile;
    long long mIndentLevel;
    long long mIndent;
}

@property (nonatomic) BOOL prettyPrint;
@property (nonatomic) BOOL isStandalone;

- (void)dealloc;
- (id)init;
- (void)_appendIndent;
- (void)_appendNewline;
- (void)_appendString:(id)a0;
- (void)_exportArray:(id)a0;
- (void)_exportDictionary:(id)a0;
- (void)_exportValue:(id)a0;
- (BOOL)exportPropertyList:(id)a0 toPath:(id)a1;

@end
