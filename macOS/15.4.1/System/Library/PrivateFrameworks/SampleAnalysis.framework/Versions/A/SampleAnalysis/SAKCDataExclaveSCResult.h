@class NSArray;

@interface SAKCDataExclaveSCResult : NSObject {
    const struct exclave_scresult_info { unsigned long long x0; unsigned long long x1; } *_exclave_scresult_info;
    NSArray *_callstacks;
}

- (void).cxx_destruct;

@end
