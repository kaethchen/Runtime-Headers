@interface PXBackgroundFetchToken : NSObject {
    BOOL _finished;
}

- (void)dealloc;
- (id)init;
- (void)finish;

@end
