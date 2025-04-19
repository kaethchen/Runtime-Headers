@interface CLPCReportingStatSelection : NSObject {
    struct array<bool, 25UL> { BOOL __elems_[25]; } selection;
}

- (id)init;
- (void)enumerate:(id /* block */)a0;
- (void)deselectAll;
- (void)selectAll;
- (BOOL)selectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)selectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStat:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deselectStatsOfSchema:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)isSelected:(unsigned long long)a0 error:(id *)a1;

@end
