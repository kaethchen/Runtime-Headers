@interface VideosUI.JSHighlightsManager : VUIJSObject <VideosUI.JSHighlightsInterface>

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (void)handleHighlightsUpdatedNotification:(id)a0;
- (void)handleRestrictionsDidChange:(id)a0;
- (void)syndicationInfoUpdated:(id)a0;

@end
