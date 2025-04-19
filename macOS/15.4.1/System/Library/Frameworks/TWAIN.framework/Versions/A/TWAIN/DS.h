@class NSString;

@interface DS : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_bundlePath;
    short _refNum;
    struct TW_IDENTITY { char *Id; struct TW_VERSION { unsigned short MajorNum; unsigned short MinorNum; unsigned short Language; unsigned short Country; unsigned char Info[34]; } Version; unsigned short ProtocolMajor; unsigned short ProtocolMinor; unsigned int SupportedGroups; unsigned char Manufacturer[34]; unsigned char ProductFamily[34]; unsigned char ProductName[34]; } _identity;
    void /* function */ *_dsEntryProc;
    BOOL _dsIsOpen;
    BOOL _dsIsEnabled;
}

@property BOOL usedByImageCapture;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)path;
- (id)displayName;
- (struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; })identity;
- (BOOL)isOpen;
- (BOOL)supportedMatch:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0;
- (short)callDS:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0 dataGroup:(unsigned int)a1 dataArgumentType:(unsigned short)a2 messageID:(unsigned short)a3 dataPtr:(char *)a4;
- (id)checkForCompatibleFireWireDevice:(id)a0 idVendor:(id)a1 idProduct:(id)a2;
- (id)checkForCompatibleUSBDevice:(id)a0 idVendor:(id)a1 idProduct:(id)a2;
- (short)closeDS:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0;
- (id)descriptionWithICAInfo:(id)a0;
- (id)infoFromICAInfo:(id)a0;
- (short)initDSEntry:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0;
- (id)initWithPath:(id)a0 appIdentity:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a1 icaInfo:(id)a2;
- (id)manufacturerString;
- (short)openDS:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a0 dsIdentity:(struct TW_IDENTITY { char *x0; struct TW_VERSION { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4[34]; } x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned char x5[34]; unsigned char x6[34]; unsigned char x7[34]; } *)a1;
- (id)productFamilyString;
- (void)switchToTWAIN;

@end
