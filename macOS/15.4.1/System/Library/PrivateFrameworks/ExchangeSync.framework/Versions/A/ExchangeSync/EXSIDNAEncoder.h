@interface EXSIDNAEncoder : NSObject

+ (BOOL)encodingRequiredForDomainName:(id)a0;
+ (id)stringByEncodingDomainName:(id)a0;
+ (id)unsafeDomainNameCharacterSet;

@end
