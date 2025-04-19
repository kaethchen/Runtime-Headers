@class NSString;

@interface BMPathEnumerator : NSObject {
    NSString *_path;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)navigateDown;
- (id)navigateUp;
- (id)peekPath;

@end
