@class NSString;

@interface MTRDummyStorage : NSObject <MTRStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeStorageDataForKey:(id)a0;
- (BOOL)setStorageData:(id)a0 forKey:(id)a1;
- (id)storageDataForKey:(id)a0;

@end
