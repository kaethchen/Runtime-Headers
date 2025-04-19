@class NSString, CalRateLimitingQueue;

@interface CalendarLinkAppEntityNotifier : NSObject <CalAppEntityNotifier> {
    CalRateLimitingQueue *_rateLimitingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNotifier;

@end
