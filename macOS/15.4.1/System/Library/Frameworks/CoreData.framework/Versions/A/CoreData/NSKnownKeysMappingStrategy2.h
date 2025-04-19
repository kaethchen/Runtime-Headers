@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;
- (id)initForKeys:(id)a0;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;

@end
