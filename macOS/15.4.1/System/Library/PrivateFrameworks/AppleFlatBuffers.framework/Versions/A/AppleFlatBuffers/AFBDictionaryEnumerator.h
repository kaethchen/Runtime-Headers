@class AFBDictionary;

@interface AFBDictionaryEnumerator : NSEnumerator {
    AFBDictionary *_dict;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)nextObject;

@end
