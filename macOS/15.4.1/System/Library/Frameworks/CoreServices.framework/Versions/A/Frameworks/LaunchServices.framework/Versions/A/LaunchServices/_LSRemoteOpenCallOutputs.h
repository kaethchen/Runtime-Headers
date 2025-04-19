@class NSURL;

@interface _LSRemoteOpenCallOutputs : NSObject <NSSecureCoding> {
    struct vector<ProcessSerialNumber, std::allocator<ProcessSerialNumber>> { struct ProcessSerialNumber *__begin_; struct ProcessSerialNumber *__end_; struct __compressed_pair<ProcessSerialNumber *, std::allocator<ProcessSerialNumber>> { struct ProcessSerialNumber *__value_; } __end_cap_; } outPSNs;
    NSURL *outAppURL;
    BOOL outAppWasLaunched;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
