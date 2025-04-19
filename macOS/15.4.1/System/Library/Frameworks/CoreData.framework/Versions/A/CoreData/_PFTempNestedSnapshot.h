@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (const id *)knownKeyValuesPointer;

@end
