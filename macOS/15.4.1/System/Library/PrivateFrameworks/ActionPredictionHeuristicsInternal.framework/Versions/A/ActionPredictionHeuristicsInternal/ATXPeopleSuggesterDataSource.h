@class ATXHeuristicDevice;

@interface ATXPeopleSuggesterDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)peopleSuggestionsWithCallback:(id /* block */)a0;

@end
