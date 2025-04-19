@interface SnippetUIUtilities : NSObject

+ (void)createViewControllersForButtons:(id)a0 buttonFont:(id)a1 isCompact:(BOOL)a2 sourceView:(id)a3 rowModel:(id)a4 delegate:(id)a5 completionHandler:(id /* block */)a6;
+ (void)emitInstrumentationEvent:(id)a0 delegate:(id)a1;
+ (void)performSFCommand:(id)a0 rowModel:(id)a1 delegate:(id)a2;
+ (void)reportFeedback:(id)a0 queryId:(unsigned long long)a1 delegate:(id)a2;
+ (unsigned long long)searchUIButtonItemViewStyleFromVRXButtonStyle:(int)a0;
+ (BOOL)shouldHideViewForCardSection:(id)a0;
+ (BOOL)supportsConfigurationForCardSection:(id)a0;
+ (id)supportsConfigurationForCombinedRowModel:(id)a0;

@end
