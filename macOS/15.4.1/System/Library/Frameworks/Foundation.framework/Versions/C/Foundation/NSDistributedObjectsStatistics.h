@interface NSDistributedObjectsStatistics : NSDictionary {
    unsigned long long requestsReceived;
    unsigned long long repliesSent;
    unsigned long long requestsSent;
    unsigned long long repliesReceived;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)addStatistics:(id)a0;

@end
