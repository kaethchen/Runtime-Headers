@class NSError;
@protocol PTByteWriter;

@interface PTAtomWriter : NSObject

@property (readonly) unsigned long long globalAtomOffset;
@property (readonly) unsigned long long atomDataOffset;
@property (readonly) BOOL didBeginAtom;
@property (readonly) unsigned int atomType;
@property (readonly) id<PTByteWriter> byteWriter;
@property (readonly) PTAtomWriter *parentWriter;
@property (readonly) NSError *error;
@property (readonly) unsigned long long atomSize;
@property (readonly) unsigned long long atomDataSize;
@property (readonly) unsigned long long globalAtomDataOffset;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)initWithParent:(id)a0;
- (void)endAtom;
- (void)_appendBytes:(const void *)a0 size:(unsigned long long)a1;
- (void)_debugLogAtomWriterState;
- (void)_debugLogBytes:(const void *)a0 size:(unsigned long long)a1;
- (void)_debugLogBytes:(const void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)_errorForByteWriterError:(id)a0;
- (id)_errorForSize:(unsigned long long)a0;
- (id)_errorForVersion:(unsigned long long)a0;
- (void)_setErrorForByteWriterIfNeeded;
- (void)_writeBytes:(const void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (void)appendBytes:(const void *)a0 size:(unsigned long long)a1;
- (void)appendVersion:(unsigned long long)a0 flags:(unsigned long long)a1;
- (void)beginAtomOfType:(unsigned int)a0;
- (id)initWithByteWriter:(id)a0;

@end
