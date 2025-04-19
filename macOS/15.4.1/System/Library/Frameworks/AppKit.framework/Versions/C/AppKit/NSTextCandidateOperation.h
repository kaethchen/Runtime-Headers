@class NSArray, NSString, NSDictionary;

@interface NSTextCandidateOperation : NSOperation {
    NSString *_string;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
    unsigned long long _offset;
    unsigned long long _checkingTypes;
    NSDictionary *_options;
    long long _tag;
    long long _sequenceNumber;
    unsigned long long _retryCount;
    id _completionHandler;
    NSArray *_results;
}

@property (readonly) long long sequenceNumber;
@property (readonly) unsigned long long retryCount;
@property (readonly) NSArray *results;

- (void)dealloc;
- (void)main;
- (id)clone;
- (id)initWithString:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 types:(unsigned long long)a3 options:(id)a4 tag:(long long)a5 sequenceNumber:(long long)a6 retryCount:(unsigned long long)a7 completionHandler:(id /* block */)a8;
- (void)performCompletionHandler;

@end
