@class NSString;

@interface TPCSignatureMetadata : NSObject

@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *signatureID;
@property (copy, nonatomic) NSString *dataUUID;
@property (copy, nonatomic) NSString *url;

- (id)init;
- (void).cxx_destruct;

@end
