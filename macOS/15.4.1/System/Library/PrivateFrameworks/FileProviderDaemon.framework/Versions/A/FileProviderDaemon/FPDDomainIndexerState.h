@class NSURL, NSDate;

@interface FPDDomainIndexerState : NSObject {
    NSURL *_needsIndexingURL;
    NSURL *_needsAuthURL;
    NSURL *_droppedIndexURL;
    NSURL *_lastDropDataURL;
}

@property (nonatomic) unsigned long long timesIndexWasDropSinceLastStart;
@property (nonatomic) unsigned long long lastDropReason;
@property (retain, nonatomic) NSDate *lastDropDate;
@property (nonatomic) BOOL needsIndexing;
@property (nonatomic) BOOL droppedIndex;
@property (nonatomic) BOOL needsAuth;

- (void).cxx_destruct;
- (void)loadPersistedState;
- (void)dumpStateTo:(id)a0;
- (id)initWithSupportURL:(id)a0;
- (void)recordIndexDropReason:(unsigned long long)a0;
- (void)setBoolValue:(BOOL)a0 atURL:(id)a1;
- (void)unarchiveLastDropData:(id)a0;

@end
