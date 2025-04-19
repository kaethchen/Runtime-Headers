@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (oneway void)release;
- (id)retain;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithOwner:(id)a0;
- (void)superRelease;

@end
