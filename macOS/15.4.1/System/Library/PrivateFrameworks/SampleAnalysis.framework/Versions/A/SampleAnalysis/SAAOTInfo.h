@interface SAAOTInfo : NSObject {
    struct user64_dyld_aot_info { unsigned long long x86LoadAddress; unsigned long long aotLoadAddress; unsigned long long aotImageSize; unsigned char aotImageKey[32]; } _aotInfo_s;
}

@end
