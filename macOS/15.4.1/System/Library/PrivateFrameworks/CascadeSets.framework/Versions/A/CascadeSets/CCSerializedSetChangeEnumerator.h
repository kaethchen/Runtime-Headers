@class NSArray, CCDevice, CCSerializedSetMessage;

@interface CCSerializedSetChangeEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSerializedSetMessage *_setMessage;
    NSArray *_items;
    CCDevice *_localDevice;
    NSArray *_remoteDevices;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (BOOL)reset:(id *)a0;
- (id)next;
- (BOOL)hasNext;
- (id)nextBookmark;
- (id)_nextWithError:(id *)a0;
- (BOOL)beginWithBookmark:(id)a0 error:(id *)a1;
- (id)initWithSetMessage:(id)a0;
- (BOOL)isBookmarkUpToDate:(id)a0;
- (id)itemInstanceCount:(id *)a0;
- (id)sharedItemCount:(id *)a0;

@end
