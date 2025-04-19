@interface PhotosUICore.StoryAsyncPlayer : _TtCs12_SwiftObject <PXVisualDiagnosticsProvider, PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ displayScaleFactor;
    void /* unknown type, empty encoding */ desiredInlinePlayState;
    void /* unknown type, empty encoding */ onPlaybackFinished;
    void /* unknown type, empty encoding */ storyConfiguration;
    void /* unknown type, empty encoding */ sessionState;
    void /* unknown type, empty encoding */ mainPresenter;
    void /* unknown type, empty encoding */ referenceSize;
    void /* unknown type, empty encoding */ lastReferenceSize;
    void /* unknown type, empty encoding */ storyQueue;
    void /* unknown type, empty encoding */ storyQueue_traitCollection;
    void /* unknown type, empty encoding */ storyQueue_sessionState;
    void /* unknown type, empty encoding */ storyQueue_session;
    void /* unknown type, empty encoding */ storyQueue_onSessionLoad;
}

- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;

@end
