@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
