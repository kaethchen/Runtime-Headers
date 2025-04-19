@class NSArray, NSString, NSDictionary;

@interface NSPrinter : NSObject <NSSecureCoding, NSCopying, NSCoding> {
    NSString *_printerName;
    void *_printer;
    NSDictionary *_cachedDeviceDescription;
    int _ppdCreationNum;
    void *_ppdNodes;
    void *_ppdPriv;
}

@property (class, readonly, copy) NSArray *printerNames;
@property (class, readonly, copy) NSArray *printerTypes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *type;
@property (readonly) long long languageLevel;
@property (readonly, copy) NSDictionary *deviceDescription;

+ (void)_flushCachedCarbonPrintersByName;
+ (id)_printerForPrinter:(struct OpaquePMPrinter { } *)a0;
+ (id)printerWithName:(id)a0;
+ (id)printerWithName:(id)a0 domain:(id)a1 includeUnavailable:(BOOL)a2;
+ (id)printerWithType:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)domain;
- (void)encodeWithCoder:(id)a0;
- (id)host;
- (id)initWithCoder:(id)a0;
- (BOOL)isColor;
- (unsigned long long)statusForTable:(id)a0;
- (char *)_allocString:(const char *)a0;
- (void)_allocatePPDStuffAndParse;
- (id)_appendKey:(const char *)a0 option:(const char *)a1 value:(const char *)a2 inKeyNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a3;
- (id)_appendStringInKeyNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a0 key:(const char *)a1 value:(const char *)a2;
- (id)_compatibility_initWithUnkeyedCoder:(id)a0;
- (void)_deallocatePPDStuff;
- (id)_freeNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a0;
- (id)_freeNodes;
- (struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)_getNodeForKey:(id)a0 inTable:(id)a1;
- (id)_initWithName:(id)a0 printer:(struct OpaquePMPrinter { } *)a1;
- (id)_keyListForKeyNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a0;
- (struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)_makeKeyNode:(const char *)a0 inKeyNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a1;
- (id)_makeRootNode;
- (struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)_makeTable:(const char *)a0 inNode:(struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)a1;
- (struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned int x2 : 24; union { char *x0; struct *x1; struct __CFDictionary *x2; } x3; } *)_newNode:(long long)a0;
- (struct OpaquePMPrinter { } *)_printer;
- (id)_setOrderDependency:(char *)a0;
- (id)_setUIConstraints:(char *)a0;
- (BOOL)acceptsBinary;
- (BOOL)booleanForKey:(id)a0 inTable:(id)a1;
- (float)floatForKey:(id)a0 inTable:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForPaper:(id)a0;
- (int)intForKey:(id)a0 inTable:(id)a1;
- (BOOL)isFontAvailable:(id)a0;
- (BOOL)isKey:(id)a0 inTable:(id)a1;
- (BOOL)isOutputStackInReverseOrder;
- (id)note;
- (struct CGSize { double x0; double x1; })pageSizeForPaper:(id)a0;
- (id)processKeyword:(char *)a0 option:(char *)a1 keyTran:(char *)a2 arg:(char *)a3 argTran:(char *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForKey:(id)a0 inTable:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForKey:(id)a0 inTable:(id)a1;
- (id)stringForKey:(id)a0 inTable:(id)a1;
- (id)stringListForKey:(id)a0 inTable:(id)a1;

@end
