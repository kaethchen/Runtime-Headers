@interface TokenGenerationInference.TwoStageSpeculativeDecoder : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ draftModel;
    void /* unknown type, empty encoding */ draftNode;
    void /* unknown type, empty encoding */ targetModel;
    void /* unknown type, empty encoding */ targetNode;
    void /* unknown type, empty encoding */ draftingBehavior;
    void /* unknown type, empty encoding */ sampler;
    void /* unknown type, empty encoding */ targetPresampler;
    void /* unknown type, empty encoding */ draftPresampler;
    void /* unknown type, empty encoding */ draftCount;
    void /* unknown type, empty encoding */ bufferedTokens;
    void /* unknown type, empty encoding */ countTotalAcceptedDraftTokens;
    void /* unknown type, empty encoding */ countTotalGeneratedDraftTokenTreeLayers;
    void /* unknown type, empty encoding */ countTotalOutputTokens;
    void /* unknown type, empty encoding */ countTotalOutputTokensDirectlyFromTargetModel;
    void /* unknown type, empty encoding */ draftModelEmptyResponse;
    void /* unknown type, empty encoding */ draftModelEarlyReturn;
    void /* unknown type, empty encoding */ countSpeculationSuccess;
    void /* unknown type, empty encoding */ countSpeculationBatchCount;
    void /* unknown type, empty encoding */ stopTokenId;
    void /* unknown type, empty encoding */ mustProcessPrompt;
}

@end
