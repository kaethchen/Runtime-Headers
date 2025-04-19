@interface _SGTSpotlightSuggesterTiming : NSObject {
    double lastCheck;
    long long initialization;
    long long queryPreparation;
    long long queryIntermediateStart;
    long long queryIntermediateEnd;
    long long queryExecution;
    long long queryPostProcess;
    long long intermediateSuggestionCount;
    long long intermediateQueryCount;
}

@end
