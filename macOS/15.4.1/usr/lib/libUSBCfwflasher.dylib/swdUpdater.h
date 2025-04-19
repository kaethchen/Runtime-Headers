@class NSString;

@interface swdUpdater : NSObject <flasher> {
    unsigned int device;
    unsigned long long entryID;
    NSString *name;
    BOOL verbose;
    BOOL updated;
    BOOL retriesEnabled;
}

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (id)uuid;
- (id)version;
- (id)initWithDevice:(unsigned int)a0;
- (id)rid;
- (BOOL)setVerbose:(BOOL)a0;
- (BOOL)isDone:(id *)a0;
- (BOOL)checkForBootArgs:(char *)a0;
- (id)createFileNameForFirmware:(id *)a0;
- (BOOL)enableDisableFirmwareUpdateMode:(BOOL)a0;
- (BOOL)enableDisableGAID:(BOOL)a0;
- (BOOL)enableDisableRetries:(BOOL)a0;
- (unsigned int)findSWDMatchingDeviceNode:(char[128])a0 withError:(id *)a1;
- (BOOL)flash:(id)a0 andErrorResponse:(id *)a1;
- (id)optkeyshash;
- (BOOL)query:(id)a0 andErrorResponse:(id *)a1;
- (BOOL)stashFirmwareVersionInFile:(id)a0;

@end
