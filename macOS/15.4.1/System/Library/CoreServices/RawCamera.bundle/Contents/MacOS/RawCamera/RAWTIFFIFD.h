@class NSDictionary, NSMutableDictionary;

@interface RAWTIFFIFD : NSObject

@property (retain) NSMutableDictionary *mTagsByID;
@property (retain) NSMutableDictionary *mTagsByName;
@property (retain) NSDictionary *mNamespace;
@property (retain) NSDictionary *mNamespaceReverse;

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)dumpMemoryInfoKey:(id)a0 indent:(unsigned long long)a1;
- (void)dumpObjCInfoKey:(id)a0 value:(id)a1 indent:(unsigned long long)a2;
- (id)initWithNamespace:(id)a0 reverseNamespace:(id)a1;

@end
