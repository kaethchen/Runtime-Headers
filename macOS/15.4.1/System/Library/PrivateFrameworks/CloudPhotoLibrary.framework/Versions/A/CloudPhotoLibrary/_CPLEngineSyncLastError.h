@class NSError, NSDate;

@interface _CPLEngineSyncLastError : NSObject {
    unsigned long long _state;
    NSDate *_date;
    NSError *_error;
}

- (void).cxx_destruct;

@end
