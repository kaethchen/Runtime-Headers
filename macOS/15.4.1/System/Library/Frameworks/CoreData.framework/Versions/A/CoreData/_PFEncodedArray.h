@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (Class)classForCoder;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (const id *)_values;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;

@end
