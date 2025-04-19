@class NSString;

@interface _NSTraceLogEntry : NSObject {
    NSString *_message;
    NSString *_closingMarker;
    unsigned long long _pauseCount;
    BOOL _enabled;
}

- (void).cxx_destruct;

@end
