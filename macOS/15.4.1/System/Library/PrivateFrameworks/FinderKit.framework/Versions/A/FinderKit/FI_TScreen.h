@interface FI_TScreen : NSObject

+ (id)closestScreenForOffScreenPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (struct set<double, std::less<double>, std::allocator<double>> { struct __tree<double, std::less<double>, std::allocator<double>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<double, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<double>> { unsigned long long x0; } x2; } x0; })availableScaleFactors;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableWindowPositioningBoundsForPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableWindowPositioningBoundsForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (struct CGSize { double x0; double x1; })backupWindowMaximumSize;
+ (double)cgScaleFactorForGreatestAreaScreenRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (double)cgScaleFactorForScreen:(id)a0;
+ (id)closestScreenForOffScreenRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (BOOL)forceWindowOntoPrimaryDisplay:(id)a0 offsetFromBottom:(double)a1;
+ (id)greatestAreaScreenForPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (id)greatestAreaScreenForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (double)minimumBackupDistanceFromMonitorEdge;
+ (id)primaryScreen;
+ (double)primaryScreenCGScaleFactor;
+ (unsigned int)primaryScreenDisplayID;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryScreenFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryScreenVisibleFrame;
+ (id)screenWithDisplayID:(unsigned int)a0;

@end
