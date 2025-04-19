@class NSString;

@interface DiagnosticsURLInfo : NSObject

@property (readonly) NSString *url;
@property (readonly) double visitTime;

- (void).cxx_destruct;
- (id)filteredDictionaryRepresentationExcludingURLs:(id)a0;
- (id)initWithURL:(id)a0 visitTime:(double)a1;

@end
