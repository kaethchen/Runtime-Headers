@interface JPReader : NSObject

@property (nonatomic) struct JetPackReader { } *backing;
@property (copy, nonatomic) id /* block */ fileEntryFound;
@property (copy, nonatomic) id /* block */ dataSegmentFound;
@property (copy, nonatomic) id /* block */ keyForIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)processStream:(id)a0 signatureVerifier:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)convertError;

@end
