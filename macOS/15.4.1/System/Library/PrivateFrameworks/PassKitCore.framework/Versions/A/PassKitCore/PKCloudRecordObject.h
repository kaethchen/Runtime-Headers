@class NSSet, NSMutableDictionary, NSObject;
@protocol PKCloudStoreCoding;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {
    NSMutableDictionary *_recordIDToRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *records;
@property (readonly, nonatomic) NSObject<PKCloudStoreCoding> *item;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (id)_descriptionWithDetailedOutput:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (id)initWithRecords:(id)a0;

@end
