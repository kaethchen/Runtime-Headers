@class _NSQueryGenerationToken;

@interface _NSGenerationTokenMapEntry : NSObject {
    _NSQueryGenerationToken *_token;
    int _refCount;
}

- (void)dealloc;

@end
