@interface PFReceipt : PFCommon

+ (id)fileInReceipt:(const char *)a0 onVolumeOrHomeDir:(id)a1 forClass:(id)a2;
+ (BOOL)receiptExistsForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2;
+ (id)receiptForFile:(const char *)a0 onVolumeOrHomeDir:(id)a1;
+ (id)receiptForFile:(const char *)a0 onVolumeOrHomeDir:(id)a1 forClass:(id)a2;
+ (id)receiptForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;
+ (id)receiptForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 forClass:(id)a3 error:(id *)a4;
+ (id)receiptIdentifiersForVolume:(id)a0;
+ (id)receiptIdentifiersForVolume:(id)a0 forClass:(id)a1;
+ (id)receiptWithModule:(id)a0 andID:(id)a1 context:(id)a2 onVolumeOrHomeDir:(id)a3 error:(id *)a4;

- (id)initWithModule:(id)a0 andID:(id)a1 context:(id)a2 onVolumeOrHomeDir:(id)a3 error:(id *)a4;

@end
