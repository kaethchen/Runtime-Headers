@class NSArray;

@interface SAKCDataExclaveCallstack : NSObject {
    const struct exclave_ipcstackentry_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *_exclave_ipcstackentry_info;
    NSArray *_addresses;
}

- (void).cxx_destruct;

@end
