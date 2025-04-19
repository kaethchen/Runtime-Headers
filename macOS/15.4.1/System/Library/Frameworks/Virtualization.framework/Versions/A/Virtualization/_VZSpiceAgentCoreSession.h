@class NSMutableData, NSMutableDictionary;

@interface _VZSpiceAgentCoreSession : NSObject {
    struct MallocPtr<unsigned int> { unsigned int *_ptr; } _capabilities;
    BOOL _invalidated;
    unsigned int _pauseCount;
    int _maxClipboard;
    NSMutableDictionary *_pasteboardState;
    NSMutableData *_readBuffer;
    NSMutableData *_messageBuffer;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
