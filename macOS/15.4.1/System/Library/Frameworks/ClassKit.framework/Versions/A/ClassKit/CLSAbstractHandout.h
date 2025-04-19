@class NSString, NSArray, NSDate;

@interface CLSAbstractHandout : CLSObject <CLSMutableAssetAdopter, CLSAssetAdopter> {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
    long long _version;
}

@property (retain, nonatomic) NSDate *dateOfPublication;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *instructions;
@property (retain, nonatomic) NSDate *dueDate;
@property (nonatomic) long long version;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)addAsset:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)removeAsset:(id)a0;

@end
