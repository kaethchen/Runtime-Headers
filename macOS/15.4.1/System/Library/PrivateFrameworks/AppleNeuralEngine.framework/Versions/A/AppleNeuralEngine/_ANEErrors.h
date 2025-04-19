@interface _ANEErrors : NSObject

+ (id)createErrorWithCode:(long long)a0 description:(id)a1;
+ (id)programLoadErrorForMethod:(id)a0 code:(long long)a1;
+ (id)baseModelIdentifierNotFoundForNewInstanceMethod:(id)a0;
+ (id)dataNotFoundForMethod:(id)a0;
+ (id)entitlementErrorForMethod:(id)a0;
+ (id)fileAccessErrorForMethod:(id)a0;
+ (id)fileNotFoundErrorForMethod:(id)a0;
+ (id)hostTooOld:(id)a0;
+ (id)invalidModelErrorForMethod:(id)a0;
+ (id)invalidModelInstanceErrorForMethod:(id)a0;
+ (id)invalidModelKeyErrorForMethod:(id)a0;
+ (id)missingCodeSigningErrorForMethod:(id)a0;
+ (id)modelIdentifierNotFoundForMethod:(id)a0;
+ (id)modelNewInstanceCacheIdentifierNotNilMethod:(id)a0;
+ (id)notSupportedErrorForMethod:(id)a0;
+ (id)priorityErrorForMethod:(id)a0;
+ (id)programChainingPrepareErrorForMethod:(id)a0;
+ (id)programCreationErrorForMethod:(id)a0;
+ (id)programIOSurfacesMapErrorForMethod:(id)a0 code:(long long)a1;
+ (id)programIOSurfacesUnmapErrorForMethod:(id)a0 code:(long long)a1;
+ (id)programInferenceOtherErrorForMethod:(id)a0;
+ (id)programInferenceOverflowErrorForMethod:(id)a0;
+ (id)programInferenceProgramNotFoundForMethod:(id)a0;
+ (id)programLoadErrorForMethod:(id)a0;
+ (id)programLoadNewInstanceErrorForMethod:(id)a0;
+ (id)programLoadNewInstanceErrorForMethod:(id)a0 code:(long long)a1;
+ (id)systemModelPurgeNotAllowedForMethod:(id)a0;
+ (id)timeoutErrorForMethod:(id)a0;

@end
