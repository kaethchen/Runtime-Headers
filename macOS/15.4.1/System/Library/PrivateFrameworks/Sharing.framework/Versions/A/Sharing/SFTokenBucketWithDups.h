@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray { } *_dups;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)a0;
- (id)initWithBucket:(id)a0 dupHistoryLength:(unsigned long long)a1;

@end
