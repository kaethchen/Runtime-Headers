@interface PIObjectRemoval : NSObject

+ (void)initialize;
+ (BOOL)loadAndRegisterRefinementModel:(out id *)a0;
+ (void)warmUpResources;
+ (id)_instancesForOperation:(id)a0;
+ (id)_instancesFromMaskIdentifier:(id)a0;
+ (BOOL)_loadAndRegisterModelForKey:(id)a0 error:(out id *)a1;
+ (id)_maskSourceWithIdentifier:(id)a0 composition:(id)a1;
+ (id)_newMaskForInstance:(unsigned long long)a0 context:(id)a1 maskIdentifier:(id)a2 error:(out id *)a3;
+ (id)_newMaskForInstances:(id)a0 context:(id)a1 maskIdentifier:(id)a2 error:(out id *)a3;
+ (id)_newMaskImageForOperation:(id)a0 composition:(id)a1 error:(out id *)a2;
+ (id)_nonInstancedOperationsFromComposition:(id)a0;
+ (BOOL)_operationIsBrushStroke:(id)a0;
+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_tightImageSpaceBoundsForOperation:(id)a0 composition:(id)a1 error:(out id *)a2;
+ (void)_warmUpOperation:(id)a0 context:(id)a1;
+ (BOOL)brushStrokeExceedsSizeLimit:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 closeAndFillStroke:(BOOL)a2;
+ (void)createAvailableObjectsMaskForContext:(id)a0 composition:(id)a1 completion:(id /* block */)a2;
+ (void)createDeclutterMaskForContext:(id)a0 composition:(id)a1 completion:(id /* block */)a2;
+ (void)createMaskContextForComposition:(id)a0 requestID:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
+ (id)createMaskForInstance:(unsigned long long)a0 context:(id)a1 maskIdentifierPrefix:(id)a2 error:(out id *)a3;
+ (void)createSubjectMaskForContext:(id)a0 composition:(id)a1 completion:(id /* block */)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inflatedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageOrientation:(long long)a1;
+ (BOOL)loadAndRegisterInpaintModel:(out id *)a0;
+ (BOOL)loadAndRegisterModelForKey:(id)a0 error:(out id *)a1;
+ (BOOL)mask:(id)a0 containsPoint:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)mask:(id)a0 intersectsDiskWithOrigin:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2;
+ (id)maskIdentifierForSegmentIndex:(unsigned long long)a0;
+ (id)maskIdentifierForSegmentIndices:(id)a0;
+ (BOOL)maskIdentifierIsDeclutter:(id)a0;
+ (BOOL)maskIsMostlyWithinFace:(id)a0 imageSize:(struct { long long x0; long long x1; })a1 imageOrientation:(long long)a2 intAreaOverMaskAreaThreshold:(double)a3 intAreaOverFaceAreaThreshold:(double)a4 detectedFaces:(id)a5;
+ (BOOL)objectMasksExceedSizeLimit:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)privateCreateMaskForInstance:(unsigned long long)a0 context:(id)a1 maskIdentifierPrefix:(id)a2 error:(out id *)a3;
+ (void)purgeIntermediateInpaintCaches;
+ (id)removeGatedInstances:(id)a0 context:(id)a1;
+ (id)removeInstancesOccludedByOperations:(id)a0 fromInstances:(id)a1 composition:(id)a2 maskContext:(id)a3;
+ (id)removeOperationsFromInstances:(id)a0 composition:(id)a1 context:(id)a2;
+ (BOOL)strokeIsEntirelyWithinFace:(id)a0 imageSize:(struct { long long x0; long long x1; })a1 imageOrientation:(long long)a2 detectedFaces:(id)a3;
+ (void)updateMaskContext:(id)a0 forComposition:(id)a1 requestID:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;

@end
