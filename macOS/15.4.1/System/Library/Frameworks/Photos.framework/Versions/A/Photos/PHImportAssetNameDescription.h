@class NSString;

@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithFileName:(id)a0 uuid:(id)a1;

@end
