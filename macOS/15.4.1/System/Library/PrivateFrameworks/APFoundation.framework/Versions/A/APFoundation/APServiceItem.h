@class APHTTPSession;

@interface APServiceItem : NSObject {
    APHTTPSession *_session;
    unsigned long long _counter;
    double _createdAt;
    double _lastAccessedAt;
}

- (void).cxx_destruct;

@end
