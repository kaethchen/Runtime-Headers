@interface CRFormLabelFinder : NSObject

+ (struct vector<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x0; void *x1; struct __compressed_pair<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *> *, std::allocator<std::tuple<double, CRFormFieldLabelPosition, CROutputRegion *>>> { void *x0; } x2; })labelRegionsForField:(id)a0 inRegions:(id)a1;
+ (double)_labelMatchingCostForRegion:(id)a0 field:(id)a1 position:(unsigned long long *)a2;
+ (id)labelRegionForField:(id)a0 inRegions:(id)a1;
+ (id)parseAndAssignLabelForField:(id)a0 regions:(id)a1 associatedLabels:(id)a2 labelRegions:(void *)a3;

@end
