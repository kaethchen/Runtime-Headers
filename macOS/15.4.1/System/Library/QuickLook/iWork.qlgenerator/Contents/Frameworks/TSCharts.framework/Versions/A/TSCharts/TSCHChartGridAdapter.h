@class NSString, TSCHChartGrid;

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {
    unsigned long long _index;
}

@property (readonly, nonatomic) TSCHChartGrid *grid;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithChartGrid:(id)a0 index:(unsigned long long)a1;

@end
