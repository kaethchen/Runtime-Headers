@class NSArray, NSString, WFObservableArrayResult;

@interface _NSServicesShortcutsState : NSObject <WFObservableResultObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WFObservableArrayResult *_result;
    BOOL _resultChanged;
    BOOL _needsFetch;
}

@property (copy, nonatomic) NSArray *shortcutServiceEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)fetchServicesWorkflowsIfNeeded;
- (void)observableResultDidChange:(id)a0;
- (id)parseServicesWorkflows:(id)a0;
- (void)setNeedsFetch;

@end
