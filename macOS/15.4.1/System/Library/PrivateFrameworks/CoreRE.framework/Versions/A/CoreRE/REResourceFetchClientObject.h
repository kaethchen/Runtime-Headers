@class REResourceClientPorts, NSString, NSObject;
@protocol OS_voucher;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService>

@property (readonly, nonatomic) void *resourceFetchManager;
@property (readonly, nonatomic) unsigned long long peerID;
@property (readonly, nonatomic) REResourceClientPorts *clientPorts;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) struct HashTable<unsigned long long, re::SharedPtr<re::SharedObject>, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { struct Allocator *m_allocator; unsigned int *m_buckets; union Entry { struct EntryWithoutHash *withoutHash; struct EntryWithHash *withHash; } m_entries; unsigned int m_capacity; unsigned int m_count; unsigned int m_touchedEntries; unsigned int m_freeList; unsigned int m_version; } pendingShaderGraphs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)associateConnectionWithPeerID:(unsigned long long)a0 clientPorts:(id)a1;
- (void)decodeShaderGraph:(id)a0 withReply:(id /* block */)a1;
- (id)initWithResourceFetchManager:(void *)a0 connection:(const struct Connection { id x0; } *)a1 voucher:(id)a2;
- (void)pushLoadResourceWithAssetId:(unsigned long long)a0 assetType:(id)a1 isPriorityAsset:(BOOL)a2;
- (void)receiveDirectResourceCommit:(id)a0;
- (void)receiveReferenceObject:(id)a0;
- (void)releaseResourceWithAssetId:(unsigned long long)a0;
- (void)resourceAtAssetPath:(id)a0 payloadDidUpdate:(id)a1 error:(id)a2;

@end
