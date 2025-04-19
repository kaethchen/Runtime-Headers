@class NSString, NSData;

@interface BTMCodeSignInfo : NSObject {
    struct __SecCode { } *_secCode;
    struct __CFDictionary { } *_information;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *signingIdentifier;
@property (readonly) NSString *teamIdentifier;
@property (readonly) NSString *developerName;
@property (readonly) NSString *designatedRequirement;
@property (readonly) NSData *lightweightCodeRequirement;
@property (readonly) BOOL hasAssociatedBundleIdentifiersEntitlement;

+ (id)codeSignInfoForURL:(id)a0;
+ (id)codeSignInfoForURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (int)_initWithSecCode;
- (BOOL)isSandboxed;

@end
