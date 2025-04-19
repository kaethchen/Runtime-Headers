@class NSURL, NSData;

@interface ISStoreIndex : NSObject {
    NSData *_data;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    NSData *_entryData;
}

@property (readonly) NSURL *indexFileURL;
@property (readonly) NSData *data;
@property (readonly) struct os_unfair_lock_s { unsigned int x0; } *dataLock;

- (id)description;
- (void).cxx_destruct;
- (id)data;
- (void)invalidate;
- (BOOL)validate;
- (id)_internalData;
- (void)_internalSetData:(id)a0;
- (void)enumerateValuesForUUID:(unsigned char[16])a0 bock:(id /* block */)a1;
- (void)enumerateValuesWithBock:(id /* block */)a0;
- (id)initWithStoreFileURL:(id)a0;

@end
