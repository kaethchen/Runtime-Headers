@class NSDictionary, NSArray, NSEnumerator;

@interface _ICNFIMAPConnectionEnumerator : NSEnumerator {
    NSDictionary *_connectionsByMailboxName;
    NSArray *_allMailboxNames;
    unsigned long long _allMailboxNamesCount;
    unsigned long long _positionInMailboxNames;
    NSEnumerator *_nullEnumerator;
}

@property (retain, nonatomic) id lastObjectKey;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithConnectionDictionary:(id)a0;

@end
