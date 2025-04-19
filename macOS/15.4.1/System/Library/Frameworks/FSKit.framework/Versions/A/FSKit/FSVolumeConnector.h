@class FSItemGetAttributesRequest, NSXPCConnection, FSModuleVolume;

@interface FSVolumeConnector : NSObject <FSVolumeXPC> {
    _Atomic unsigned long long _nextFreeSpaceSeqno;
    _Atomic unsigned long long _nextAttributeSeqno;
}

@property (readonly) FSItemGetAttributesRequest *standardGetAttrReq;
@property (retain) FSModuleVolume *ourVolume;
@property (weak) NSXPCConnection *ourConnection;

+ (id)volumeConnectorModuleVolume:(id)a0 connection:(id)a1;
+ (id)volumeWithName:(id)a0 resource:(id)a1 connection:(id)a2;

- (void).cxx_destruct;
- (void)unmount:(id /* block */)a0;
- (void)makeSymlinkIn:(id)a0 named:(id)a1 contents:(id)a2 attributes:(id)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)reclaim:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)abortSearch:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)blockmapFile:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 flags:(unsigned long long)a2 operationID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)checkAccessTo:(id)a0 requestedAccess:(unsigned long long)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)close:(id)a0 keepingMode:(int)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)createIn:(id)a0 named:(id)a1 type:(long long)a2 attributes:(id)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)endIO:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 status:(int)a2 flags:(unsigned long long)a3 operationID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)fetchVolumeMachPortLabeled:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)fileAttributes:(id)a0 requestedAttributes:(unsigned long long)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (id)getFreeSpaceInVolume;
- (void)getRootFileHandle:(id /* block */)a0;
- (void)getStandardItemAttributesDataForItem:(id)a0 replyHandler:(id /* block */)a1;
- (void)getStandardItemAttributesDataForNewItem:(id)a0 replyHandler:(id /* block */)a1;
- (void)getStandardItemAttributesForItem:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithModuleVolume:(id)a0 connection:(id)a1;
- (void)listXattrsOf:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)lookupIn:(id)a0 name:(id)a1 flags:(unsigned int)a2 requestID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)makeCloneOf:(id)a0 named:(id)a1 inDirectory:(id)a2 attributes:(id)a3 usingFlags:(unsigned int)a4 requestID:(unsigned long long)a5 replyHandler:(id /* block */)a6;
- (void)makeLinkOf:(id)a0 named:(id)a1 inDirectory:(id)a2 requestID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)mount:(id)a0 replyHandler:(id /* block */)a1;
- (void)open:(id)a0 withMode:(int)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)otherAttributeOf:(id)a0 named:(id)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)parentsAndAttributesForItemsByID:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)pathConfigurationOf:(id)a0 propertyName:(int)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)readDirectory:(id)a0 intoBuffer:(id)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)readDirectory:(id)a0 requestedAttributes:(unsigned long long)a1 intoBuffer:(id)a2 cookie:(unsigned long long)a3 verifier:(unsigned long long)a4 requestID:(unsigned long long)a5 replyHandler:(id /* block */)a6;
- (void)readDirectory:(id)a0 withAttr:(BOOL)a1 requestedAttributes:(unsigned long long)a2 intoBuffer:(id)a3 cookie:(unsigned long long)a4 verifier:(unsigned long long)a5 requestID:(unsigned long long)a6 replyHandler:(id /* block */)a7;
- (void)readFrom:(id)a0 atOffset:(unsigned long long)a1 intoBuffer:(id)a2 requestID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)readSymbolicLinkOf:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)removeDirectory:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)removeItem:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)renameItemIn:(id)a0 named:(id)a1 item:(id)a2 toDirectory:(id)a3 newName:(id)a4 toItem:(id)a5 usingFlags:(unsigned int)a6 requestID:(unsigned long long)a7 replyHandler:(id /* block */)a8;
- (void)replenishSearchCreditsFor:(id)a0 credits:(unsigned int)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)search:(id)a0 token:(id)a1 criteria:(id)a2 resumeAt:(id)a3 maxData:(unsigned int)a4 maxDelay:(double)a5 initialCredits:(unsigned int)a6 requestID:(unsigned long long)a7 replyHandler:(id /* block */)a8;
- (void)setFileAttributesOf:(id)a0 to:(id)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)setOtherAttributeOf:(id)a0 named:(id)a1 value:(id)a2 requestID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)setUpdateInterest:(id)a0 interest:(BOOL)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)setXattrOf:(id)a0 named:(id)a1 value:(id)a2 how:(unsigned long long)a3 requestID:(unsigned long long)a4 replyHandler:(id /* block */)a5;
- (void)synchronize:(unsigned int)a0 replyHandler:(id /* block */)a1;
- (void)volumeStatistics:(id)a0 requestID:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)writeTo:(id)a0 atOffset:(unsigned long long)a1 fromBuffer:(id)a2 requestID:(unsigned long long)a3 replyHandler:(id /* block */)a4;
- (void)xattrOf:(id)a0 named:(id)a1 requestID:(unsigned long long)a2 replyHandler:(id /* block */)a3;

@end
