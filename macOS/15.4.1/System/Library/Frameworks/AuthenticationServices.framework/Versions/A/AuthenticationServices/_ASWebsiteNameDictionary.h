@class NSString, NSDictionary;

@interface _ASWebsiteNameDictionary : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_websiteNameDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sanitizedDataFromDeserializedData:(id)a0;

- (void).cxx_destruct;
- (id)snapshotData;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;
- (id)websiteNameForDomain:(id)a0;

@end
