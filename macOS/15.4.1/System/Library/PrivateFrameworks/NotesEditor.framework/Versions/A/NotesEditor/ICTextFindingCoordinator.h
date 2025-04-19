@class NSString, ICNote, NSTextStorage, NSArray, NSError;
@protocol NSTextFinderAsynchronousDocumentFindMatch;

@interface ICTextFindingCoordinator : NSObject {
    void /* unknown type, empty encoding */ dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)matchesForString:(NSString *)a0 inTextStorage:(NSTextStorage *)a1 note:(ICNote *)a2 relativeTo:(id<NSTextFinderAsynchronousDocumentFindMatch>)a3 options:(unsigned long long)a4 maxResults:(unsigned long long)a5 resultsAggregator:(void (^)(NSArray *, BOOL, NSError *))a6;
- (void)replaceMatches:(NSArray *)a0 withString:(NSString *)a1 selectionOnly:(BOOL)a2 completion:(void (^)(unsigned long long, NSError *))a3;

@end
