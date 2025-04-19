@class EFBloomFilter;

@interface _EDSentToFilter : NSObject {
    EFBloomFilter *_firstFilter;
    EFBloomFilter *_secondFilter;
    EFBloomFilter *_thirdFilter;
}

- (id)init;
- (void).cxx_destruct;
- (void)loadFromDisk;
- (void)updateWithSentToSimpleAddresses:(id)a0 recentNotSentToSimpleAddresses:(id)a1;
- (unsigned long long)mayHaveSentToSimpleAddress:(id)a0;

@end
