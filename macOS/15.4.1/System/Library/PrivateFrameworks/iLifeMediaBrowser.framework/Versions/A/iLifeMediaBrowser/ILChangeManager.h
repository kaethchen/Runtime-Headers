@class NSRecursiveLock, ILMediaManager, NSMutableDictionary, NSOperationQueue;

@interface ILChangeManager : NSObject {
    ILMediaManager *_plugin;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_groupToOperationMap;
    NSRecursiveLock *_stateLock;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPlugin:(id)a0;
- (void)_sendChangeNotification:(id)a0;
- (void)addChangeOperation:(id)a0;
- (void)addChangeOperation:(id)a0 forMediaGroup:(id)a1;
- (void)cancelMediaGroupLoadingExcludingMediaGroups:(id)a0;
- (void)sendChangeNotificationForKey:(id)a0 fromSource:(id)a1;

@end
