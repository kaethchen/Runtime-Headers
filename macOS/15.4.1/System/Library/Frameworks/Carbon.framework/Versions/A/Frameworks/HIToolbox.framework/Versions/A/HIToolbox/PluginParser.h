@class NSArray, NSDictionary, NSMutableDictionary;

@interface PluginParser : NSObject {
    NSArray *_linesOfFile;
    NSDictionary *_keysAndEncodings;
    NSMutableDictionary *_dict;
}

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (id)tokens:(id)a0;
- (void)addEntries:(id)a0 forKey:(id)a1;
- (void)addEntry:(id)a0 forKey:(id)a1;
- (id)data:(id)a0;
- (BOOL)isComment:(id)a0 delimiter:(id)a1;
- (id)key:(id)a0;
- (id)keyForIndex:(int)a0;
- (int)keyToIndex:(id)a0;
- (id)linesOfFile;
- (BOOL)openCodeFile:(id)a0 withEncoding:(unsigned int)a1;
- (void)setKeysAndEncoding:(id)a0;

@end
