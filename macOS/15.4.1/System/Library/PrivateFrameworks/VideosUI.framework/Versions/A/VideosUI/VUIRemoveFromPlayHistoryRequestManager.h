@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)sendRequestForDeleteID:(id)a0 isContinueWatching:(BOOL)a1;

@end
