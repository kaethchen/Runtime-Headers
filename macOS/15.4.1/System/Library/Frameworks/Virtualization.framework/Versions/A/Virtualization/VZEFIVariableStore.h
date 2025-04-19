@class NSURL;

@interface VZEFIVariableStore : NSObject

@property (readonly, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initCreatingVariableStoreAtURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
