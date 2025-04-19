@class JSValue;

@interface MusicUI.JSSharedWithYouHighlightsProvider : NSObject <_TtP7MusicUIP33_D23580509F0629F72182BEAD0D1C6B0E39JSSharedWithYouHighlightsProviderExport_> {
    void /* unknown type, empty encoding */ highlightsProvider;
}

@property (nonatomic, readonly) JSValue *isSupported;
@property (nonatomic, readonly) JSValue *isEnabled;
@property (nonatomic, readonly) JSValue *highlights;

- (id)init;
- (void).cxx_destruct;
- (void)startIfNeeded;

@end
