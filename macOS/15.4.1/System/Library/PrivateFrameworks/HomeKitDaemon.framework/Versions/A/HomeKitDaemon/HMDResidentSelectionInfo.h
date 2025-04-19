@class NSUUID, NSDate;

@interface HMDResidentSelectionInfo : NSObject

@property (retain) NSUUID *preferredResidentIDSIdentifier;
@property (readonly) unsigned long long currentModeType;
@property (readonly) NSDate *selectionTimestamp;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPreferredResidentIDSIdentifier:(id)a0 currentResidentSelectionModeType:(unsigned long long)a1 selectionTimestamp:(id)a2;
- (id)initWithPreferredResidentIDSIdentifier:(id)a0 selectionTimestamp:(id)a1;

@end
