@interface VideosUI.LibDownloadingEpisodesViewModel : VideosUI.LibViewModel {
    void /* unknown type, empty encoding */ finishFetchEpisode;
    void /* unknown type, empty encoding */ totalDownloadEpisodeCount;
    void /* unknown type, empty encoding */ _textViewModel;
    void /* unknown type, empty encoding */ showEntity;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ seasons;
}

- (void)fetchShowDetails;

@end
