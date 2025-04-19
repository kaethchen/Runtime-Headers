@class NSString, NSURL;

@interface AVMediaExtensionProperties : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSString *extensionName;
@property (readonly, nonatomic) NSString *containingBundleName;
@property (readonly, nonatomic) NSURL *extensionURL;
@property (readonly, nonatomic) NSURL *containingBundleURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(struct __CFDictionary { } *)a0;

@end
