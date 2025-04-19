@class NSString;

@interface _NSScrollingPerfLogger : NSObject {
    unsigned long long _signpostId;
    NSString *_category;
}

+ (id)beginLoggingScrollGestureCategory:(id)a0 documentViewClassName:(id)a1 identifier:(id)a2;

- (void)dealloc;
- (id)initWithCategory:(id)a0 documentViewClassName:(id)a1 identifier:(id)a2;

@end
