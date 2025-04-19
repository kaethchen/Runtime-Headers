@class NSMutableSet;
@protocol WBSHistoryImporterDelegate, NSXPCProxyCreating;

@interface WBSHistoryImporterDelegateProxy : NSObject <WBSHistoryImporterDelegate> {
    id<WBSHistoryImporterDelegate, NSXPCProxyCreating> _delegate;
    NSMutableSet *_uniqueHighLevelDomains;
}

@property (readonly, nonatomic) unsigned long long numberOfVisitImported;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)addVisitWithURLString:(id)a0 visitTime:(double)a1 title:(id)a2 loadSuccessful:(BOOL)a3 httpGet:(BOOL)a4 redirectSourceURLString:(id)a5 redirectSourceVisitTime:(double)a6 visitCount:(unsigned long long)a7;

@end
