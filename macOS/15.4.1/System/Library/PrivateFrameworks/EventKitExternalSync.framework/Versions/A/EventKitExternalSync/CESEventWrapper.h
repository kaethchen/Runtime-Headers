@interface CESEventWrapper : CESObjectWrapper

+ (BOOL)keepEventFromServer:(id)a0;

- (id)event;
- (BOOL)save;
- (void)adjustFloatingStartTime:(id *)a0 endTime:(id *)a1 toBeLocalEquivalentTo:(id)a2 originalOffset:(id)a3;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
