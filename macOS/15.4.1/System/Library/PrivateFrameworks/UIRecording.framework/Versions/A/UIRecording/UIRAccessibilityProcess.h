@class NSString;

@interface UIRAccessibilityProcess : UIRAccessibilityElement {
    struct __LSASN { } *_LSASNRef;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _psn;
    struct __CFDictionary { } *_applicationInfo;
    NSString *_title;
}

+ (id)processes;
+ (id)processWithName:(id)a0;
+ (id)processWithUnixID:(int)a0;
+ (id)processesWithUnixIDs:(id)a0;

- (void)dealloc;
- (id)bundleIdentifier;
- (id)title;
- (unsigned long long)uniqueID;
- (id)displayedName;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (id)initWithLSASNRef:(struct __LSASN { } *)a0;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })processSerialNumber;
- (long long)unixID;

@end
