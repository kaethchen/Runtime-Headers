@class NSMutableSet, NSObject;
@protocol SymptomsCAObserverDelegate, OS_dispatch_queue;

@interface SymptomsCAObserverDelegateEntry : NSObject

@property (retain, nonatomic) id<SymptomsCAObserverDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *events;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesDelegate:(id)a0;

@end
