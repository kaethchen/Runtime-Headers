@class NSArray, NSString, NSDictionary, NSOrthography;

@interface NSTextCheckingOperation : NSOperation {
    NSString *_string;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    unsigned long long _offset;
    unsigned long long _checkingTypes;
    NSDictionary *_options;
    long long _tag;
    long long _sequenceNumber;
    id _completionHandler;
    NSArray *_results;
    NSOrthography *_orthography;
    long long _wordCount;
}

@property (readonly) long long sequenceNumber;
@property (readonly) NSArray *results;
@property (readonly) NSOrthography *orthography;
@property (readonly) long long wordCount;

- (void)dealloc;
- (void)main;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 types:(unsigned long long)a3 options:(id)a4 tag:(long long)a5 sequenceNumber:(long long)a6 completionHandler:(id /* block */)a7;
- (void)performCompletionHandler;

@end
