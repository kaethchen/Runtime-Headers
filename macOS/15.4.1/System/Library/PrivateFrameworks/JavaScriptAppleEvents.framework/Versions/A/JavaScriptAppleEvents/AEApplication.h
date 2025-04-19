@class NSAppleEventDescriptor;

@interface AEApplication : AEScriptableEntity {
    NSAppleEventDescriptor *_address;
}

@property (retain) NSAppleEventDescriptor *address;

+ (id)currentApplication;
+ (id)applicationWithPath:(id)a0;
+ (id)remoteApplicationWithPath:(id)a0;

- (void).cxx_destruct;
- (BOOL)isRunning;
- (BOOL)launch;
- (id)emptyAppleEventWithEventClass:(unsigned int)a0 eventID:(unsigned int)a1;
- (id)initCurrentApplication;
- (id)initRemoteApplicationWithPath:(id)a0;
- (id)sendAppleEvent:(id)a0 timeout:(long long)a1 withContext:(id)a2 waitForReply:(BOOL)a3 error:(id *)a4;
- (id)sendAppleEvent:(id)a0 withContext:(id)a1 waitForReply:(BOOL)a2 error:(id *)a3;
- (void)setPSNAddress;

@end
