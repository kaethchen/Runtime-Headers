@class NSDictionary, NSArray;

@interface PMInkChecker : NSObject {
    struct OpaquePMPrinter { void /* function */ **x0; int x1; unsigned char x2; unsigned char x3; char *x4; struct __CFDictionary *x5; unsigned char x6; struct __CFString *x7; char *x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct __CFString *x12; struct __CFBoolean *x13; struct __CFBoolean *x14; struct __CFBoolean *x15; struct __CFBoolean *x16; struct __CFBoolean *x17; struct __CFArray *x18; unsigned char x19; int x20; struct __CFArray *x21; struct __CFArray *x22; struct __CFURL *x23; unsigned char x24; unsigned char x25; struct __CFArray *x26; struct __CFString *x27; struct __CFString *x28; long long x29; char *x30; struct __CFArray *x31; struct __CFArray *x32; struct __CFData *x33; struct __CFURL *x34; } *_printer;
    NSDictionary *_supplies;
    NSArray *_consumables;
}

+ (id)inkCheckerWithPrinter:(struct OpaquePMPrinter { void /* function */ **x0; int x1; unsigned char x2; unsigned char x3; char *x4; struct __CFDictionary *x5; unsigned char x6; struct __CFString *x7; char *x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct __CFString *x12; struct __CFBoolean *x13; struct __CFBoolean *x14; struct __CFBoolean *x15; struct __CFBoolean *x16; struct __CFBoolean *x17; struct __CFArray *x18; unsigned char x19; int x20; struct __CFArray *x21; struct __CFArray *x22; struct __CFURL *x23; unsigned char x24; unsigned char x25; struct __CFArray *x26; struct __CFString *x27; struct __CFString *x28; long long x29; char *x30; struct __CFArray *x31; struct __CFArray *x32; struct __CFData *x33; struct __CFURL *x34; } *)a0;

- (void)dealloc;
- (struct OpaquePMPrinter { void /* function */ **x0; int x1; unsigned char x2; unsigned char x3; char *x4; struct __CFDictionary *x5; unsigned char x6; struct __CFString *x7; char *x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct __CFString *x12; struct __CFBoolean *x13; struct __CFBoolean *x14; struct __CFBoolean *x15; struct __CFBoolean *x16; struct __CFBoolean *x17; struct __CFArray *x18; unsigned char x19; int x20; struct __CFArray *x21; struct __CFArray *x22; struct __CFURL *x23; unsigned char x24; unsigned char x25; struct __CFArray *x26; struct __CFString *x27; struct __CFString *x28; long long x29; char *x30; struct __CFArray *x31; struct __CFArray *x32; struct __CFData *x33; struct __CFURL *x34; } *)printer;
- (void)setPrinter:(struct OpaquePMPrinter { void /* function */ **x0; int x1; unsigned char x2; unsigned char x3; char *x4; struct __CFDictionary *x5; unsigned char x6; struct __CFString *x7; char *x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct __CFString *x12; struct __CFBoolean *x13; struct __CFBoolean *x14; struct __CFBoolean *x15; struct __CFBoolean *x16; struct __CFBoolean *x17; struct __CFArray *x18; unsigned char x19; int x20; struct __CFArray *x21; struct __CFArray *x22; struct __CFURL *x23; unsigned char x24; unsigned char x25; struct __CFArray *x26; struct __CFString *x27; struct __CFString *x28; long long x29; char *x30; struct __CFArray *x31; struct __CFArray *x32; struct __CFData *x33; struct __CFURL *x34; } *)a0;
- (void)setConsumables:(id)a0;
- (int)checkInk:(BOOL)a0;
- (id)consumables;
- (id)disclaimer;
- (id)initWithPrinter:(struct OpaquePMPrinter { void /* function */ **x0; int x1; unsigned char x2; unsigned char x3; char *x4; struct __CFDictionary *x5; unsigned char x6; struct __CFString *x7; char *x8; struct __CFString *x9; struct __CFString *x10; struct __CFString *x11; struct __CFString *x12; struct __CFBoolean *x13; struct __CFBoolean *x14; struct __CFBoolean *x15; struct __CFBoolean *x16; struct __CFBoolean *x17; struct __CFArray *x18; unsigned char x19; int x20; struct __CFArray *x21; struct __CFArray *x22; struct __CFURL *x23; unsigned char x24; unsigned char x25; struct __CFArray *x26; struct __CFString *x27; struct __CFString *x28; long long x29; char *x30; struct __CFArray *x31; struct __CFArray *x32; struct __CFData *x33; struct __CFURL *x34; } *)a0;
- (void)inkCheckFinished:(id)a0;
- (BOOL)inkIsLow;
- (id)inkSummary;
- (BOOL)isSupplyInkRelated:(int)a0;
- (void)localizeSupplies:(id)a0 ppd:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a1;
- (id)lowConsumables;
- (id)markerChangeTime;
- (id)modifyPrinterStateReasonString:(id)a0 forSupplyType:(int)a1;
- (void)setSupplies:(id)a0;
- (id)supplies;
- (id)vendorSuppliesInfo;

@end
