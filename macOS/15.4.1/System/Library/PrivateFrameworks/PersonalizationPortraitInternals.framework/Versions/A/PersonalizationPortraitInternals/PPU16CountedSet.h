@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addValue:(unsigned short)a0;
- (unsigned short)countForValue:(unsigned short)a0;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (unsigned long long)uniqueValueCount;

@end
