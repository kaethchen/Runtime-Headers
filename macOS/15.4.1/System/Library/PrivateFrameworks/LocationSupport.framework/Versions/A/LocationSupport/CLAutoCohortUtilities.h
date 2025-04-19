@interface CLAutoCohortUtilities : NSObject

+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (BOOL)autoCohortingEnabled;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)createDirectoryAtPath:(id)a0;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (id)getSafeEdges;
+ (id)getUnsafeEdges;
+ (id)getUnvettedEdges;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (void)markUnvetted:(id)a0;
+ (void)markUnvettedSafe;
+ (void)markUnvettedUnsafe;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (id)readEdges:(id)a0;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;

@end
