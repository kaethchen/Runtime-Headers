@class NSMutableArray, NSMutableDictionary;

@interface CSKStreamSortedData : NSObject

@property (readonly, nonatomic) NSMutableArray *activities;
@property (readonly, nonatomic) NSMutableArray *messages;
@property (readonly, nonatomic) NSMutableDictionary *activityMessagesMap;

- (id)init;
- (void).cxx_destruct;
- (id)allMessages;
- (void)_addMessageToActivityMessagesMap:(id)a0;
- (id)_removeActivitiesWithIdentifiers:(id)a0 fromMutableArray:(id)a1;
- (unsigned long long)_removeMessages:(id)a0 fromMutableArray:(id)a1;
- (void)addActivity:(id)a0 direction:(unsigned long long)a1;
- (void)addMessage:(id)a0 direction:(unsigned long long)a1;
- (id)allActivities;
- (unsigned long long)allActivitiesCount;
- (unsigned long long)allMessagesCount;
- (id)popActivitiesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)popMessagesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)removeActivitiesRelatedToMessagesIfEligible:(id)a0;
- (id)removeMessagesRelatedToActivities:(id)a0;

@end
