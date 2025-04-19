@class HMDStructuredWriter;

@interface HMDBufferingStructureDataFilter : HMDStructuredDataFoundationWriter {
    HMDStructuredWriter *_writer;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)error;
- (void)failWithError:(id)a0;
- (id)initWithUnderlyingWriter:(id)a0 block:(id /* block */)a1;
- (void)emitRootValue:(id)a0;

@end
