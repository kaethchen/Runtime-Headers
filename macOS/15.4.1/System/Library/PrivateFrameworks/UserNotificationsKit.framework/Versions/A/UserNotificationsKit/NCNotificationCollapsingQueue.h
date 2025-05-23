@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject

@property (retain, nonatomic) NSMutableArray *requests;
@property (nonatomic) unsigned long long collapsingThreshold;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)addNotificationRequest:(id)a0;
- (void)removeNotificationRequest:(id)a0;
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)a0;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)a0 atIndex:(unsigned long long)a1;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)a0;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)a0;
- (void)_insertPreemptingNotificationRequest:(id)a0;
- (id)_requestsCollapsibleWithNotificationRequest:(id)a0;
- (BOOL)containsNotificationRequest:(id)a0;
- (BOOL)containsNotificationRequestMatchingRequest:(id)a0;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)a0;
- (id)peekNextNotificationRequest;
- (id)peekNextNotificationRequestPassingTest:(id /* block */)a0;
- (void)replaceNotificationRequest:(id)a0;

@end
