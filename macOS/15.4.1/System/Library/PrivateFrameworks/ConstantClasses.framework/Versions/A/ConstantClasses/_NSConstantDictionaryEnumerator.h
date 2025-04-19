@interface _NSConstantDictionaryEnumerator : NSEnumerator {
    id *currentKey;
    unsigned long long capacity;
    unsigned long long keyIndex;
}

- (id)allObjects;
- (id)nextObject;
- (id)initWithFirstKeyPointer:(id *)a0 capacity:(unsigned long long)a1;

@end
