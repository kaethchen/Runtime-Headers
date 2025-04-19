@interface SAKCDataExclaveAddressSpace : NSObject {
    const struct exclave_addressspace_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *_exclave_addressspace_info;
    const char *_name;
}

@end
