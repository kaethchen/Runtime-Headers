@class NSArray, NSDictionary, NSAppleEventDescriptor, NSURL;

@interface _LSRemoteOpenCallApplicationParameters : NSObject <NSSecureCoding> {
    unsigned int _flags;
    void *_asyncLaunchRefCon;
    NSDictionary *_environment;
    NSArray *_args;
    NSAppleEventDescriptor *_initialEvent;
    NSArray *_architectures;
    NSURL *_applicationURL;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _applicationPSN;
    BOOL _hasApplicationPSN;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const struct LSApplicationParameters_V1 { long long x0; unsigned int x1; struct FSRef *x2; void *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct AEDesc *x6; struct __CFArray *x7; struct __CFURL *x8; struct ProcessSerialNumber *x9; } *applicationParameters;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const struct LSApplicationParameters_V1 { long long x0; unsigned int x1; struct FSRef *x2; void *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct AEDesc *x6; struct __CFArray *x7; struct __CFURL *x8; struct ProcessSerialNumber *x9; } *)applicationParameters;
- (id)initWithApplicationParameters_V1:(const struct LSApplicationParameters_V1 { long long x0; unsigned int x1; struct FSRef *x2; void *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct AEDesc *x6; struct __CFArray *x7; struct __CFURL *x8; struct ProcessSerialNumber *x9; } *)a0 inheritEnvironment:(BOOL)a1;

@end
