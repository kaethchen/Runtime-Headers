@interface TPCCallstackMatching : NSObject

+ (id)calculateStatisticsAndDetermineMatching:(id)a0 inspectionSignatureObjectDict:(id)a1 boundaries:(unsigned long long)a2 thirdPartyFrames:(unsigned long long)a3 count:(long long)a4 triggerFrame:(id)a5;
+ (void)checkDirectFrameInvocation:(id)a0 inspectedSignatureObjectDict:(id)a1 store:(id)a2;
+ (void)checkPresenceOfFrame:(id)a0 inspectedSignatureObjectDict:(id)a1 store:(id)a2 frameType:(unsigned long long)a3;
+ (void)checkPresenceOfSpecialSQLiteFrames:(id)a0 inspectedSignatureObjectDict:(id)a1 store:(id)a2;
+ (void)fillDiagnosticMessage:(id)a0 diagnostics:(id)a1 details:(id)a2 format:(unsigned long long)a3;
+ (id)findAncestorSignatureObjectForSameLog:(id)a0 object:(id)a1 levels:(unsigned long long)a2 store:(id)a3;
+ (id)findApproximateAncestorSignatureObjectForSameLog:(id)a0 object:(id)a1 levels:(unsigned long long)a2 store:(id)a3 threshold:(unsigned long long)a4;
+ (id)findNextSignatureObjectForSameLog:(id)a0 object:(id)a1 levels:(unsigned long long)a2;
+ (long long)frameCountBeforeBoundaryInSignature:(id)a0;
+ (BOOL)isAncestorThirdPartyFrame:(unsigned long long)a0 object:(id)a1;
+ (BOOL)isLastRegionSimilarToBacktrace:(id)a0 score:(unsigned long long *)a1;
+ (BOOL)isWALCheckpointFrame:(id)a0;
+ (void)shouldSuppress:(id)a0 thirdPartyFrameCount:(unsigned long long)a1;
+ (BOOL)signatureFrameIsBoundary:(id)a0;
+ (id)validateBacktrace:(id)a0 error:(id *)a1;
+ (BOOL)validateUltimateAncestorIsRoot:(id)a0 store:(id)a1;

- (id)diagnosticsDictionaryForDiagnostics:(id)a0;
- (BOOL)isCallerThirdPartyFrame:(unsigned long long)a0 level:(unsigned long long)a1 backtrace:(id)a2;
- (int)issueTypeFromDiagnostics:(id)a0;
- (id)matchNThirdPartyFrames:(id)a0 store:(id)a1 percent:(long long)a2 diagnostics:(id)a3 error:(id *)a4;
- (id)matchPartialLastNAPIBoundaries:(id)a0 store:(id)a1 count:(long long)a2 diagnostics:(id)a3 error:(id *)a4;
- (id)matchPartialLastNThirdPartyFrames:(id)a0 store:(id)a1 count:(long long)a2 diagnostics:(id)a3 error:(id *)a4;
- (id)matchWithSignatures:(id)a0 store:(id)a1 type:(unsigned long long)a2 diagnostics:(id)a3 error:(id *)a4;
- (id)traverseAndMatchStore:(id)a0 store:(id)a1 count:(long long)a2 triggerFrame:(id)a3 error:(id *)a4;

@end
