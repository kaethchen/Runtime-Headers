@class NSData;

@interface NSDictionaryEntry : NSObject {
    struct __CFSet { } *dictionary;
    NSData *data;
    long long size;
    long long mtime;
}

- (void)dealloc;

@end
