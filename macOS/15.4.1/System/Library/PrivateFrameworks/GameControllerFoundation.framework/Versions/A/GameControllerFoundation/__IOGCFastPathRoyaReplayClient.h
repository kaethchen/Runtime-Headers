@class NSString, NSDictionary;

@interface __IOGCFastPathRoyaReplayClient : __IOGCFastPathClient <GCIUnknownObjC> {
    const struct IOCFPlugInInterfaceStruct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *_IOCFPlugInVTBL;
    const struct IOGCFastPathClientInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; unsigned int x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; } *_IOGCFastPathClientVTBL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_propertyTable;
    unsigned long long _providerID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_cfTypeID;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;

@end
