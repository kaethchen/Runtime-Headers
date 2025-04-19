@class NSString;

@interface FileProviderDaemon.LocalFileEnumerator : NSObject <NSFileProviderEnumerator> {
    void /* unknown type, empty encoding */ observedID;
    void /* unknown type, empty encoding */ itemURL;
    void /* unknown type, empty encoding */ urls;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ notifier;
    void /* unknown type, empty encoding */ shouldUpdateFileIDInGenstore;
    void /* unknown type, empty encoding */ enumerators;
    void /* unknown type, empty encoding */ enumeratorsQueue;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;

@end
