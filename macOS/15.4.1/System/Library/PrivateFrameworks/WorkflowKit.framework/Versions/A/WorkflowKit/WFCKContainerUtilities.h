@interface WFCKContainerUtilities : NSObject

+ (void)fetchDeviceRecordsInContainer:(id)a0 completion:(id /* block */)a1;
+ (void)fetchDeviceRecordsInContainer:(id)a0 withCursor:(id)a1 results:(id)a2 completion:(id /* block */)a3;
+ (id)metaDataDeviceQueryOperation;

@end
