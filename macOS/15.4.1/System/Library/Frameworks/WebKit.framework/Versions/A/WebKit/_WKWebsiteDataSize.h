@interface _WKWebsiteDataSize : NSObject {
    struct Size { unsigned long long totalSize; struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } typeSizes; } _size;
}

@property (readonly, nonatomic) unsigned long long totalSize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSize:(const void *)a0;
- (unsigned long long)sizeOfDataTypes:(id)a0;

@end
