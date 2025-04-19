@class CPLRecordChange, CPLScopedIdentifier, NSData, CPLPlaceholderRecord;

@interface CPLRecordView : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *synthesizedRecord;
@property (readonly, nonatomic) CPLPlaceholderRecord *placeholderRecord;
@property (readonly, nonatomic) NSData *recordChangeData;
@property (readonly, nonatomic) NSData *sharingRecordChangeData;

- (id)description;
- (id)redactedDescription;
- (id)relation;
- (Class)recordClass;
- (BOOL)supportsResources;
- (id)changeForType:(unsigned long long)a0;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 changeType:(unsigned long long)a3 diffTracker:(id)a4;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 diffTracker:(id)a3;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;

@end
