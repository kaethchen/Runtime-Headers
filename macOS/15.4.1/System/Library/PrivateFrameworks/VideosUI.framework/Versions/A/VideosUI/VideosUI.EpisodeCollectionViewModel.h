@interface VideosUI.EpisodeCollectionViewModel : VideosUI.ViewModel <VUISeasonDownloadDataSourceProvider> {
    void /* unknown type, empty encoding */ headerViewModel;
    void /* unknown type, empty encoding */ seasonViewModels;
    void /* unknown type, empty encoding */ prototypeItemViewModel;
    void /* unknown type, empty encoding */ seasonTitles;
    void /* unknown type, empty encoding */ seasonTitleToEpStartIndex;
    void /* unknown type, empty encoding */ focusedEpisodeIndex;
    void /* unknown type, empty encoding */ episodes;
    void /* unknown type, empty encoding */ needsUpdateKey;
    void /* unknown type, empty encoding */ prototypeBodyKey;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _seasonsMetadata;
    void /* unknown type, empty encoding */ fragmentServiceRequests;
    void /* unknown type, empty encoding */ fragmentServiceRequestCancellable;
    void /* unknown type, empty encoding */ eventMonitorDescriptors;
    void /* unknown type, empty encoding */ contextDataRef;
}

- (long long)totalEpisodeCount;
- (long long)episodeCountForSeasonIndex:(long long)a0;
- (id)seasonCanonicalIdForSeasonIndex:(long long)a0;
- (long long)totalSeasonCount;
- (id)tvShowCanonicalId;

@end
