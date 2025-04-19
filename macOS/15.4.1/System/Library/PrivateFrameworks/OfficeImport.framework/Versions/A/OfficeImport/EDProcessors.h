@class NSMutableArray, EDWorkbook;

@interface EDProcessors : NSObject {
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)addProcessorClass:(Class)a0;
- (void)applyProcessorsWithSheet:(id)a0;
- (BOOL)hasProcessors;
- (id)initWithWorkbook:(id)a0;
- (void)markObject:(id)a0 processor:(Class)a1;
- (void)removeProcessorClass:(Class)a0;

@end
