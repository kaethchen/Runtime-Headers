@interface AMSCodableResponseDecoder : NSObject <AMSResponseDecoding> {
    void /* unknown type, empty encoding */ rootClass;
}

- (id)init;
- (id)initWithRootClass:(Class)a0;
- (id)resultFromResult:(id)a0 error:(id *)a1;

@end
