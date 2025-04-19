@interface FI_TIconSpatialDataController : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _bulkSettingContainer;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _bulkSettingNodes;
    struct vector<IconSpatialData, std::allocator<IconSpatialData>> { struct IconSpatialData *__begin_; struct IconSpatialData *__end_; struct __compressed_pair<IconSpatialData *, std::allocator<IconSpatialData>> { struct IconSpatialData *__value_; } __end_cap_; } _bulkSettingSpatialData;
    long long _settingSpatialDataInBulk;
}

@property (nonatomic) BOOL writeSpatialDataToDisk;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)inBulkModeForParent:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)loadSpatialData:(struct IconSpatialData { int x0; int x1; int x2; short x3; } *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)loadSpatialDataBulk:(void *)a0 forNodes:(const void *)a1 inContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)manuallyWriteSpatialDataInBulk:(const void *)a0 spatialData:(const void *)a1;
- (void)saveSpatialData:(const struct IconSpatialData { int x0; int x1; int x2; short x3; } *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)setSpatialData:(const struct IconSpatialData { int x0; int x1; int x2; short x3; } *)a0 inNodePropertyList:(void *)a1;
- (void)setSpatialDataBulkMode:(BOOL)a0 forParent:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)setSpatialDataOnNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 fromNodePropertyList:(const void *)a1;
- (struct IconSpatialData { int x0; int x1; int x2; short x3; })spatialDataFromNodePropertyList:(const void *)a0;
- (void)writeSpatialData:(const struct IconSpatialData { int x0; int x1; int x2; short x3; } *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)writeSpatialDataInBulk:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 nodes:(const void *)a1 spatialData:(const void *)a2;

@end
