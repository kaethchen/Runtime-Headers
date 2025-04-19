@class NSString, NSData;

@interface _PASLPReaderBinaryPlist : NSObject <_PASLPReaderProtocol> {
    NSData *_backingData;
    struct { void *mmapBase; unsigned long long mmapSize; } _mappedRegion;
    unsigned long long _topObjectRecord;
    unsigned long long _offsetsCount;
    unsigned char _offsetsSize;
    unsigned char _objectRefSize;
    const void *_offsets;
    struct __CFAllocator { } *_releaseReaderDeallocator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 sourcedFromPath:(id)a1 needsValidation:(BOOL)a2 error:(id *)a3;
- (id)keyAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0 usingArrayContext:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)objectForKey:(id)a0 usingDictionaryContext:(id)a1;
- (id)rootObjectWithErrMsg:(id *)a0;
- (id)unlazyCopyForArrayWithContext:(id)a0;
- (id)unlazyCopyForDictionaryWithContext:(id)a0;

@end
