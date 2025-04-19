@class NSData, NSArray, NSString;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *equivalentContentVersions;
@property (readonly, copy, nonatomic) NSArray *equivalentMetadataVersions;
@property (readonly, copy) NSString *lastEditorDeviceName;
@property BOOL conflictResolved;
@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4;
- (id)versionRewritingBeforeFirstSync;
- (id)etagHash;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)initWithMainContentVersion:(id)a0 equivalentContentVersions:(id)a1 mainMetadataVersion:(id)a2 equivalentMetadataVersions:(id)a3 lastEditorDeviceName:(id)a4 conflictResolved:(BOOL)a5;

@end
