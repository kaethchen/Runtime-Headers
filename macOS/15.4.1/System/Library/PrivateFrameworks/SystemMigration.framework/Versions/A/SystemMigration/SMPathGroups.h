@interface SMPathGroups : NSObject

+ (id)coalescedPathsForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (id)copiersForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (id)preliminaryStatsForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (id)statsForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (void)statsForGrouping:(unsigned long long)a0 fromPather:(id)a1 callbackBlock:(id /* block */)a2;
+ (void)updatePreliminaryGroupSizeDelegates:(id)a0 fromPather:(id)a1;

@end
