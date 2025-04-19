@class NSString;

@interface BookDataStore.CRDTModelSync : BCMutableCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ protoData;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)a0;
- (id)initWithCloudData:(id)a0;

@end
