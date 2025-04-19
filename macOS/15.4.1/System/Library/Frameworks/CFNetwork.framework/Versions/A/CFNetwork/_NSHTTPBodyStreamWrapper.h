@class NSInputStream;

@interface _NSHTTPBodyStreamWrapper : NSObject {
    NSInputStream *bodyStream;
    id spoolingStream;
    struct __CFString { } *backupFile;
}

- (void)dealloc;

@end
