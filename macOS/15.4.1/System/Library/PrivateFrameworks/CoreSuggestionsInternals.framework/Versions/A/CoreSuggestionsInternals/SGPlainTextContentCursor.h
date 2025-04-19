@class NSIndexSet;

@interface SGPlainTextContentCursor : NSObject {
    NSIndexSet *_quoted;
    struct __CFString { } *_str;
    unsigned long long _len;
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } _ib;
}

@property (nonatomic) unsigned long long pos;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)forward;
- (BOOL)backward;
- (BOOL)backwardToString:(id)a0 consume:(BOOL)a1;
- (void)backwardWhile:(id /* block */)a0;
- (BOOL)forwardToString:(id)a0 consume:(BOOL)a1;
- (void)forwardWhile:(id /* block */)a0;
- (id)initWithMailMessage:(id)a0;
- (void)seekToEnd;
- (void)seekToStart;

@end
