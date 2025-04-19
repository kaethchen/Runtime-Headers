@class UABestAppSuggestionManager, ATXHeuristicDevice;

@interface ATXBestAppDataSource : NSObject {
    ATXHeuristicDevice *_device;
    UABestAppSuggestionManager *_bestAppSuggestionManager;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)bestAppSuggestionWithCallback:(id /* block */)a0;

@end
