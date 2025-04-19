@class NSString, NSData, KVProfileInfo;

@interface KVStreamProfileReader : NSObject <KVProfileReader> {
    NSData *_data;
    KVProfileInfo *_profileInfo;
    unsigned int _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)data;
- (id)profileInfo;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithData:(id)a0 profileInfo:(id)a1 offset:(unsigned int)a2;

@end
