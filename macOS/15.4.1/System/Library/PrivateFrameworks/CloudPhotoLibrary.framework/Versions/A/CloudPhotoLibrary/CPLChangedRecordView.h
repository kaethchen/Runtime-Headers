@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView

@property (readonly, nonatomic) CPLRecordView *baseRecordView;
@property (readonly, nonatomic) CPLRecordChange *change;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (Class)recordClass;
- (id)scopedIdentifier;
- (id)changeForType:(unsigned long long)a0;
- (id)initWithChange:(id)a0 overRecordView:(id)a1;
- (id)placeholderRecord;
- (id)recordChangeData;
- (id)sharingRecordChangeData;
- (id)synthesizedRecord;

@end
