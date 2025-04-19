@class NSString, NSDictionary, NSData, NSArray, KVProfileInfo;

@interface KVJSONProfileReader : NSObject <KVProfileReader> {
    NSData *_data;
    NSDictionary *_profile;
    KVProfileInfo *_profileInfo;
    NSArray *_datasets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)profileInfo;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
