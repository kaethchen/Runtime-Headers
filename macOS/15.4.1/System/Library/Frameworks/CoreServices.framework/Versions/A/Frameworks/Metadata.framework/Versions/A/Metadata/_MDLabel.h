@interface _MDLabel : NSObject {
    struct __CFDictionary { } *_attrs;
    struct __CFUUID { } *_uuid;
    struct __CFUUID { } *_userUUID;
    union { struct { unsigned char isMutuallyExclusiveSetMember : 1; unsigned char isPublicVisibility : 1; unsigned char hasPreviewIcon : 1; unsigned char hasFinderColor : 1; unsigned char setFinderColor : 3; unsigned char hasExtendedFinderColor : 1; unsigned char reservedBits1 : 8; unsigned short reservedBits2 : 16; unsigned int reservedBits3 : 32; } ; long long payload; } _attrBits;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (void *)_copyXattrUpdatesKey;
- (struct __CFURL { } *)_findAndCacheIconURL;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })_getUUIDBytesForUserUUID:(struct __CFUUID { } *)a0;
- (unsigned char)applyToItems:(struct __CFArray { } *)a0 withValue:(double)a1;
- (void)cleanAttrs;
- (void)cleanAttrs;
- (struct __CFData { } *)copyIconData;
- (struct __CFUUID { } *)copyIconUUID;
- (void *)getAttr:(struct __CFString { } *)a0;
- (id)getAttrFallback:(const struct __CFString **)a0;
- (id)getAttrFallback:(const struct __CFString **)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 attributes:(struct __CFDictionary { } *)a1;
- (id)initWithUUID:(struct __CFUUID { } *)a0 attributes:(struct __CFDictionary { } *)a1 forUserUUID:(struct __CFUUID { } *)a2;
- (void)updateAttrs:(struct __CFDictionary { } *)a0;

@end
