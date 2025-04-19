@class NSFileHandle, NSMutableArray, NSOutputStream;

@interface WBSJSONWriter : NSObject {
    NSMutableArray *_stateStack;
}

@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long currentDepth;
@property (readonly, nonatomic) long long currentEntryKind;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (id)initWithFileHandle:(id)a0;
- (BOOL)finishEncodingWithError:(id *)a0;
- (id)_currentEntryStateOfKind:(long long)a0 error:(id *)a1;
- (BOOL)_checkCurrentState:(id)a0 doesNotContainKey:(id)a1 error:(id *)a2;
- (BOOL)_checkHasNoRootWithError:(id *)a0;
- (id)_dataForJSONObject:(id)a0 error:(id *)a1;
- (id)_prefixStringForCurrentDepth;
- (BOOL)_writeBuffer:(const char *)a0 length:(long long)a1 error:(id *)a2;
- (BOOL)_writeCommaIfNeededForState:(id)a0 error:(id *)a1;
- (BOOL)_writeConstantASCIIString:(const char *)a0 error:(id *)a1;
- (BOOL)_writeData:(id)a0 error:(id *)a1;
- (BOOL)_writeObjectKey:(id)a0 error:(id *)a1;
- (BOOL)_writePrettyPrintedData:(id)a0 forEntry:(id)a1 error:(id *)a2;
- (BOOL)_writeString:(id)a0 error:(id *)a1;
- (BOOL)addEntry:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)appendAndBeginArrayWithError:(id *)a0;
- (BOOL)appendAndBeginObjectWithError:(id *)a0;
- (BOOL)appendEntry:(id)a0 error:(id *)a1;
- (BOOL)beginArrayForKey:(id)a0 error:(id *)a1;
- (BOOL)beginArrayWithError:(id *)a0;
- (BOOL)beginObjectForKey:(id)a0 error:(id *)a1;
- (BOOL)beginObjectWithError:(id *)a0;
- (BOOL)closeCurrentEntryWithError:(id *)a0;
- (id)initWithFileHandle:(id)a0 options:(unsigned long long)a1;
- (id)initWithOutputStream:(id)a0 options:(unsigned long long)a1;

@end
