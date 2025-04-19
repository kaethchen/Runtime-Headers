@class NSString;

@interface TKMenu : NSMenu <NSMenuDelegate> {
    void *_tkMenu;
    unsigned long long _tkOffset;
    unsigned long long _tkItemCount;
    unsigned long long _tkSpecial;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0;
- (void)insertItem:(id)a0 atIndex:(long long)a1;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)menuDidClose:(id)a0;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)removeItemAtIndex:(long long)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)isSpecial:(unsigned long long)a0;
- (id)initWithTkMenu:(struct TkMenu { struct Tk_Window_ *x0; struct _XDisplay *x1; struct Tcl_Interp *x2; struct Tcl_Command_ *x3; struct TkMenuEntry **x4; int x5; int x6; int x7; struct Tcl_Obj *x8; struct Tcl_Obj *x9; struct Tcl_Obj *x10; struct Tcl_Obj *x11; struct Tcl_Obj *x12; struct Tcl_Obj *x13; struct Tcl_Obj *x14; struct Tcl_Obj *x15; struct Tcl_Obj *x16; struct Tcl_Obj *x17; struct Tcl_Obj *x18; unsigned long long x19; struct *x20; struct *x21; struct *x22; struct *x23; struct *x24; int x25; int x26; int x27; struct Tcl_Obj *x28; struct Tcl_Obj *x29; struct Tcl_Obj *x30; struct Tcl_Obj *x31; struct Tcl_Obj *x32; int x33; int x34; struct TkMenuEntry *x35; struct TkMenu *x36; struct TkMenu *x37; struct TkMenuOptionTables *x38; struct Tk_Window_ *x39; struct TkMenuReferences *x40; struct TkMenuPlatformData_ *x41; struct Tk_OptionSpec *x42; struct Tk_SavedOptions *x43; } *)a0;
- (void)insertItem:(id)a0 atTkIndex:(long long)a1;
- (id)newTkMenuItem:(struct TkMenuEntry { int x0; struct TkMenu *x1; struct Tk_OptionTable_ *x2; struct Tcl_Obj *x3; int x4; int x5; int x6; struct Tcl_Obj *x7; struct Tcl_Obj *x8; struct Tcl_Obj *x9; struct Tk_Image__ *x10; struct Tcl_Obj *x11; struct Tk_Image__ *x12; struct Tcl_Obj *x13; int x14; int x15; struct Tcl_Obj *x16; struct Tcl_Obj *x17; struct Tcl_Obj *x18; struct Tcl_Obj *x19; struct Tcl_Obj *x20; struct Tcl_Obj *x21; int x22; int x23; int x24; int x25; int x26; struct Tcl_Obj *x27; struct Tcl_Obj *x28; struct Tcl_Obj *x29; struct Tcl_Obj *x30; int x31; int x32; int x33; int x34; struct *x35; struct *x36; struct *x37; struct *x38; int x39; int x40; struct TkMenuReferences *x41; struct TkMenuEntry *x42; struct TkMenuPlatformEntryData_ *x43; } *)a0;
- (void)setSpecial:(unsigned long long)a0;
- (int)tkIndexOfItem:(id)a0;
- (struct TkMenu { struct Tk_Window_ *x0; struct _XDisplay *x1; struct Tcl_Interp *x2; struct Tcl_Command_ *x3; struct TkMenuEntry **x4; int x5; int x6; int x7; struct Tcl_Obj *x8; struct Tcl_Obj *x9; struct Tcl_Obj *x10; struct Tcl_Obj *x11; struct Tcl_Obj *x12; struct Tcl_Obj *x13; struct Tcl_Obj *x14; struct Tcl_Obj *x15; struct Tcl_Obj *x16; struct Tcl_Obj *x17; struct Tcl_Obj *x18; unsigned long long x19; struct *x20; struct *x21; struct *x22; struct *x23; struct *x24; int x25; int x26; int x27; struct Tcl_Obj *x28; struct Tcl_Obj *x29; struct Tcl_Obj *x30; struct Tcl_Obj *x31; struct Tcl_Obj *x32; int x33; int x34; struct TkMenuEntry *x35; struct TkMenu *x36; struct TkMenu *x37; struct TkMenuOptionTables *x38; struct Tk_Window_ *x39; struct TkMenuReferences *x40; struct TkMenuPlatformData_ *x41; struct Tk_OptionSpec *x42; struct Tk_SavedOptions *x43; } *)tkMenu;
- (void)tkMenuItemInvoke:(id)a0;

@end
