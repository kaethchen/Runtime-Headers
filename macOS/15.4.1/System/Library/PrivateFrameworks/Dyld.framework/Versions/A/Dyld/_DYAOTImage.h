@class NSData;

@interface _DYAOTImage : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) unsigned long long x86Address;
@property (nonatomic, readonly) unsigned long long aotAddress;
@property (nonatomic, readonly) unsigned long long aotSize;
@property (nonatomic, readonly) NSData *aotImageKey;

- (id)init;
- (void).cxx_destruct;

@end
