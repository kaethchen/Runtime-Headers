@interface PolicyBase : NSObject

- (id)initWithUTF8String:(const char *)a0;
- (id)initWithDictionary:(struct __CFDictionary { } *)a0;
- (struct __CFDate { } *)dateValueForKey:(struct __CFString { } *)a0 inDictionary:(struct __CFDictionary { } *)a1;
- (int)intValueForKey:(struct __CFString { } *)a0 inDictionary:(struct __CFDictionary { } *)a1;
- (struct __CFString { } *)policyAsSpaceDelimitedDataCopy;
- (char *)policyAsXMLDataCopy;
- (char *)policyAsXMLDataCopy:(BOOL)a0;

@end
