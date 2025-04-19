@class NSArray;

@interface CCSerializedSetEnumerator : NSObject <CCSetEnumerator, NSSecureCoding> {
    NSArray *_serializedSetData;
    NSArray *_serializedSets;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)enumeratorForSerializedSets:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allSets:(id *)a0;
- (id)allSetsWithItemType:(unsigned short)a0 error:(id *)a1;
- (BOOL)enumerateAllSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (id)allSetsWithOptions:(unsigned short)a0 error:(id *)a1;
- (id)allSetsWithOptions:(unsigned short)a0 itemType:(unsigned short)a1 error:(id *)a2;
- (BOOL)enumerateAllSets:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAllSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (id)initWithSerializedSetData:(id)a0;
- (id)initWithSerializedSets:(id)a0;

@end
