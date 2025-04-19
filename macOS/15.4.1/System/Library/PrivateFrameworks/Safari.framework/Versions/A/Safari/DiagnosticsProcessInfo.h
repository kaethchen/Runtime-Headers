@class NSMutableArray;

@interface DiagnosticsProcessInfo : NSObject {
    NSMutableArray *_urls;
}

@property (readonly) unsigned long long pid;
@property (nonatomic) unsigned long long age;
@property (nonatomic) double residentSize;
@property (nonatomic) double cpuUsage;
@property (nonatomic) double powerScore;
@property (nonatomic) double score;

+ (id)processWithID:(unsigned long long)a0;

- (void).cxx_destruct;
- (double)doubleForKey:(id)a0;
- (id)urls;
- (id)initWithProcessID:(unsigned long long)a0;
- (void)addURL:(id)a0 visitTime:(id)a1;
- (id)filteredDictionaryRepresentationExcludingURLs:(id)a0;

@end
