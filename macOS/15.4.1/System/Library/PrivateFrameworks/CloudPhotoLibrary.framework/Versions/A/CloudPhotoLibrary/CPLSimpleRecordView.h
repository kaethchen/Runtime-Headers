@class CPLRecordChange;

@interface CPLSimpleRecordView : CPLRecordView {
    CPLRecordChange *_synthesizedRecord;
}

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)scopedIdentifier;
- (id)synthesizedRecord;

@end
