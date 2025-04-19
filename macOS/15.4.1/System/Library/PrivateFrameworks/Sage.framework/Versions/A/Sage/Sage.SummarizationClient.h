@interface Sage.SummarizationClient : _TtCs12_SwiftObject <SummarizationStreamingDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ streamingState;
}

- (void)didEncounterTextAssistantStreamingError:(id)a0 forRequestIdentifier:(id)a1;
- (void)didFinishTextAssistantStreamingForRequestIdentifier:(id)a0;
- (void)didProduceTextAssistantPartialSummary:(id)a0 forRequestIdentifier:(id)a1;

@end
