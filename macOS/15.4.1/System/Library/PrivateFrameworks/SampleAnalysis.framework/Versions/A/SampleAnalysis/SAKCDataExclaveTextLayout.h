@class NSArray;

@interface SAKCDataExclaveTextLayout : NSObject {
    const struct exclave_textlayout_info { unsigned long long x0; unsigned long long x1; unsigned int x2; } *_exclave_textlayout_info;
    NSArray *_textSegments;
}

- (void).cxx_destruct;

@end
